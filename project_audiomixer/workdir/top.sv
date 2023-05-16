module top (
  // I/O ports
  input  logic hz2m, hz100, reset,
  input  logic [20:0] pb,
  /* verilator lint_off UNOPTFLAT */
  output logic [7:0] left, right,
         ss7, ss6, ss5, ss4, ss3, ss2, ss1, ss0,
  output logic red, green, blue,

  // UART ports
  output logic [7:0] txdata,
  input  logic [7:0] rxdata,
  output logic txclk, rxclk,
  input  logic txready, rxready
);
  logic [4:0] keycode;
  logic strobe;
  scankey u1(.clk(hz2m), .rst(reset), .in(pb[19:0]), .out(keycode), .strobe(strobe));

  logic [1:0] controller_mode;
  controller u2(.clk(strobe), .rst(reset), .set_edit(pb[19]), .set_play(pb[18]), .set_raw(pb[16]), .mode(controller_mode));

  assign red = (controller_mode == 2'd2);
  assign green = (controller_mode == 2'd1);
  assign blue = (controller_mode == 2'd0);

  
  logic [7:0] edit_seq_out;
  assign {left[7], left[5], left[3], left[1], right[7], right[5], right[3], right[1]} = seq_out;
  sequencer u3(.clk(strobe), .rst(reset), .srst(controller_mode != 2'b00), .go_left(pb[11]), .go_right(pb[8]), .seq_out(edit_seq_out));
  //bpm_clk for sequencer here?
  
  logic [2:0] prien_out;
  prienc8to3 u4(.in(edit_seq_out), .out(prien_out), .G());

  logic [3:0] edit_play_smpl [7:0];

  sequence_editor u5(.clk(strobe), .rst(reset), .mode(controller_mode), .set_time_idx(prien_out), .tgl_play_smpl({pb[3] == 1'b1, pb[2] == 1'b1, pb[1] == 1'b1, pb[0] == 1'b1}), 
                      .seq_smpl_1(edit_play_smpl[0]), .seq_smpl_2(edit_play_smpl[1]), .seq_smpl_3(edit_play_smpl[2]), .seq_smpl_4(edit_play_smpl[3]),
                      .seq_smpl_5(edit_play_smpl[4]), .seq_smpl_6(edit_play_smpl[5]), .seq_smpl_7(edit_play_smpl[6]), .seq_smpl_8(edit_play_smpl[7]));

  assign {ss0[5], ss0[1], ss0[4], ss0[2]} = {edit_play_smpl[0]};
  assign {ss1[5], ss1[1], ss1[4], ss1[2]} = {edit_play_smpl[1]};
  assign {ss2[5], ss2[1], ss2[4], ss2[2]} = {edit_play_smpl[2]};
  assign {ss3[5], ss3[1], ss3[4], ss3[2]} = {edit_play_smpl[3]};
  assign {ss4[5], ss4[1], ss4[4], ss4[2]} = {edit_play_smpl[4]};
  assign {ss5[5], ss5[1], ss5[4], ss5[2]} = {edit_play_smpl[5]};
  assign {ss6[5], ss6[1], ss6[4], ss6[2]} = {edit_play_smpl[6]};
  assign {ss7[5], ss7[1], ss7[4], ss7[2]} = {edit_play_smpl[7]};


  //PLAY section
logic [7:0] edit_sequencer_out, play_sequencer_out, seq_out;
logic [2:0] seq_sel;

sequencer u6(.clk(strobe), .rst(reset), .srst(controller_mode != 2'b00), .go_left(pb[11]), .go_right(pb[8]), .seq_out(edit_sequencer_out));//EDIT
sequencer u7(.clk(bpm_clk), .rst(reset), .srst(controller_mode != 2'b01), .go_left(0), .go_right(1), .seq_out(play_sequencer_out));//PLAY
logic [7:0] temp;

 always_ff @ (posedge hz2m, posedge reset)begin
  if(reset == 1'b1)begin
    temp <= 0;
    seq_out <= 0;
  end
  else begin
    if(controller_mode == 2'd0)begin
      temp <= edit_sequencer_out;
      seq_out <= temp;
    end
    else if(controller_mode == 2'd1)begin
      temp <= play_sequencer_out;
      seq_out <= temp;
    end
    // seq_out <= temp;
  end
 end 
 prienc8to3 u8(.in(seq_out), .out(seq_sel), .G());
  //RAW section

  logic [3:0] raw_play_smpl, play_smpl;
  assign raw_play_smpl = {pb[3], pb[2], pb[1], pb[0]};


  always_ff @(posedge hz2m, posedge reset)begin
    //play_smpl <= ((enable_ctr <= 900000) ? edit_play_smpl[seq_sel] : 4'b0) | raw_play_smpl;
    if(reset == 1'b1)begin
      play_smpl <= 4'b0;
    end
    else begin
    if(controller_mode == 2'b0)begin
      play_smpl <= 4'b0;
    end
    else if(controller_mode == 2'b01)begin
      play_smpl <= ((enable_ctr <= 900000) ? edit_play_smpl[seq_sel] : 4'b0) | raw_play_smpl;
    end
    else begin
      play_smpl <= raw_play_smpl;
    end
    end
  end


  logic sample_clk;
  logic bpm_clk;
  clkdiv #(20) clkdiv_inst(.clk(hz2m), .rst(reset), .lim(20'd499999), .hzX(bpm_clk));
  clkdiv #(20) clkdiv_inst2(.clk(hz2m), .rst(reset), .lim(20'd127), .hzX(sample_clk));

  logic [7:0] sample_data [3:0];

  sample #(
    .SAMPLE_FILE("../audio/kick.mem"),
    .SAMPLE_LEN(4000)
  ) sample_kick(.clk(sample_clk), .rst(reset), .enable(play_smpl[3]), .out(sample_data[0]));
  sample #(
    .SAMPLE_FILE("../audio/clap.mem"),
    .SAMPLE_LEN(4000)
  ) sample_clap(.clk(sample_clk), .rst(reset), .enable(play_smpl[2]), .out(sample_data[1]));
  sample #(
    .SAMPLE_FILE("../audio/hihat.mem"),
    .SAMPLE_LEN(4000)
  ) sample_hihat(.clk(sample_clk), .rst(reset), .enable(play_smpl[1]), .out(sample_data[2]));
  sample #(
    .SAMPLE_FILE("../audio/snare.mem"),
    .SAMPLE_LEN(4000)
  ) sample_snare(.clk(sample_clk), .rst(reset), .enable(play_smpl[0]), .out(sample_data[3]));


  logic [7:0] sum1, sum2, sum3, final_sum;

  always_comb begin
    sum1 = sample_data[0] + sample_data[1];
    if((sum1[7] == 1'b0) & (sample_data[0][7] & sample_data[1][7]))begin
      sum1 = 8'H80;
    end
    else if((sum1[7]) & ((sample_data[0][7] == 1'b0) & (sample_data[1][7] == 1'b0)))begin
      sum1 = 8'H7F;
    end
  end

  always_comb begin
    sum2 = sample_data[2] + sample_data[3];
    if((sum2[7] == 1'b0) & (sample_data[2][7] & sample_data[3][7]))begin
      sum2 = 8'H80;
    end
    else if((sum2[7]) & ((sample_data[2][7] == 1'b0) & (sample_data[3][7] == 1'b0)))begin
      sum2 = 8'H7F;
    end
  end

  always_comb begin
    sum3 = sum1 + sum2;
    if((sum3[7] == 1'b0) & (sum1[7] & sum2[7]))begin
      sum3 = 8'H80;
    end
    else if((sum3[7]) & ((sum1[7] == 1'b0) & (sum2[7] == 1'b0)))begin
      sum3 = 8'H7F;
    end
  end
assign final_sum = sum3 ^ 8'd128;


pwm #(64) pwm_inst (.clk(hz2m), .rst(reset), .enable(1'b1), .duty_cycle(final_sum[7:2]), .counter(), .pwm_out(right[0]));


logic prev_bpm_clk;
    logic [31:0] enable_ctr;
    always_ff @(posedge hz2m, posedge reset)
    if (reset) begin
        prev_bpm_clk <= 0;
        enable_ctr <= 0;
    end
    // otherwise, if we're in PLAY mode
    else if (controller_mode == 2'b01) begin
        // if we're on a rising edge of bpm_clk, indicating 
        // the beginning of the beat, reset the counter.
        if (~prev_bpm_clk && bpm_clk) begin
        enable_ctr <= 0;
        prev_bpm_clk <= 1;
        end
        // if we're on a falling edge of bpm_clk, indicating 
        // the middle of the beat, set the counter to half its value
        // to correct for drift.
        else if (prev_bpm_clk && ~bpm_clk) begin
            enable_ctr <= 499999;
            prev_bpm_clk <= 0;
        end
        // otherwise count to 1 million, and reset to 0 when that value is reached.
        else begin
            enable_ctr <= (enable_ctr == 999999) ? 0 : enable_ctr + 1;
        end
    end
    // reset the counter so we start on time again.
    else begin
        prev_bpm_clk <= 0;
        enable_ctr <= 0;
    end

    // in the portion of code where you assign play_smpl on a clock edge, add this:
    //play_smpl <= ((enable_ctr <= 900000) ? edit_play_smpl[seq_sel] : 4'b0) | raw_play_smpl;

endmodule
