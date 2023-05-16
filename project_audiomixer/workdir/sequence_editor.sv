module sequence_editor(
  input logic clk, rst,
  input logic [1:0] mode,
  input logic [2:0] set_time_idx,
  input logic [3:0] tgl_play_smpl,
  output logic [3:0] seq_smpl_1, seq_smpl_2, seq_smpl_3, seq_smpl_4, seq_smpl_5, seq_smpl_6, seq_smpl_7, seq_smpl_8

);
logic temp;
always_ff @(posedge clk, posedge rst)begin
    if(rst == 1'b1)begin
        seq_smpl_1 = 0;
        seq_smpl_2 = 0;
        seq_smpl_3 = 0;
        seq_smpl_4 = 0;
        seq_smpl_5 = 0;
        seq_smpl_6 = 0;
        seq_smpl_7 = 0;
        seq_smpl_8 = 0;
    end
    else begin
        if(mode == 2'b0)begin
            if(set_time_idx == 3'b0)begin
                seq_smpl_1 = (tgl_play_smpl^seq_smpl_1);
            end
            else if(set_time_idx == 3'b1)begin
                seq_smpl_2 = (tgl_play_smpl^seq_smpl_2);
            end
            else if(set_time_idx == 3'b010)begin
                seq_smpl_3 = (tgl_play_smpl^seq_smpl_3);
            end
            else if(set_time_idx == 3'b011)begin
                seq_smpl_4 = (tgl_play_smpl^seq_smpl_4);
            end
            else if(set_time_idx == 3'b100)begin
                seq_smpl_5 = (tgl_play_smpl^seq_smpl_5);
            end
            else if(set_time_idx == 3'b101)begin
                seq_smpl_6 = (tgl_play_smpl^seq_smpl_6);
            end
            else if(set_time_idx == 3'b110)begin
                seq_smpl_7 = (tgl_play_smpl^seq_smpl_7);
            end
            else if(set_time_idx == 3'b111)begin
                seq_smpl_8 = (tgl_play_smpl^seq_smpl_8);
            end

        end
    end
end

endmodule