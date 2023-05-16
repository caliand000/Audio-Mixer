module sample #(

  parameter SAMPLE_FILE = "../audio/kick.mem",
  parameter SAMPLE_LEN = 4000
)(
  input logic clk, rst, enable,
  output logic [7:0] out
);
logic [7:0] audio_mem [4095:0];
initial $readmemh(SAMPLE_FILE, audio_mem, 0, SAMPLE_LEN);
logic [11:0] counter, next_counter;
logic prev_en;

always_ff @(posedge clk, posedge rst)begin
  if(rst == 1'b1)begin
    counter <= 12'd0;
    //out <= 8'b0;
    prev_en <= 1'b0;
  end
  else begin
    //out <= audio_mem[counter];
    counter <= next_counter;
    prev_en <= enable;
  end
end
always_ff @(posedge clk)begin
    out <= audio_mem[counter];
end

always_comb begin
  if(enable & prev_en)begin
    if(counter == SAMPLE_LEN)begin
      next_counter = 12'd0;
    end
    else begin
      next_counter[0] = ~counter[0];
      next_counter[1] = counter[1] ^ counter[0];
      next_counter[2] = counter[2] ^ (counter[1] & counter[0]);
      next_counter[3] = counter[3] ^ (counter[2] & counter[1] & counter[0]);
      next_counter[4] = counter[4] ^ (counter[3] & counter[2] & counter[1] & counter[0]);
      next_counter[5] = counter[5] ^ (counter[4] & counter[3] & counter[2] & counter[1] & counter[0]);
      next_counter[6] = counter[6] ^ (counter[5] & counter[4] & counter[3] & counter[2] & counter[1] & counter[0]);
      next_counter[7] = counter[7] ^ (counter[6] & counter[5] & counter[4] & counter[3] & counter[2] & counter[1] & counter[0]);
      next_counter[8] = counter[8] ^ (counter[7] & counter[6] & counter[5] & counter[4] & counter[3] & counter[2] & counter[1] & counter[0]);
      next_counter[9] = counter[9] ^ (counter[8] & counter[7] & counter[6] & counter[5] & counter[4] & counter[3] & counter[2] & counter[1] & counter[0]);
      next_counter[10] = counter[10] ^ (counter[9] & counter[8] & counter[7] & counter[6] & counter[5] & counter[4] & counter[3] & counter[2] & counter[1] & counter[0]);
      next_counter[11] = counter[11] ^ (counter[10] & counter[9] & counter[8] & counter[7] & counter[6] & counter[5] & counter[4] & counter[3] & counter[2] & counter[1] & counter[0]);
    end
  end
  else if(prev_en & ~enable)begin
    next_counter = 0;
  end
  else
    next_counter = counter;
end
endmodule
