module sequencer(
  input logic clk, rst, srst, go_left, go_right,
  output logic [7:0] seq_out
);

always_ff @(posedge clk, posedge rst)begin
  if(rst == 1'b1)begin
    seq_out = 8'h80;
  end
  else if(srst == 1'b1)begin
    seq_out = 8'h80; // next value of seq_out?
  end
  else if(go_left == 1'b1 | go_right == 1'b1)begin
    if(go_left == 1'b1)begin
        seq_out = seq_out << 1 | {7'b0, seq_out[7]};
        //{seq_out << 1, seq_out[7]};
    end
    else if(go_right == 1'b1)begin
        seq_out = seq_out >> 1 | {seq_out[0], 7'b0};
        //{seq_out[0], seq_out >> 1};
    end
  end
end

endmodule
