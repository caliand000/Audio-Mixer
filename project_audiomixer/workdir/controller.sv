module controller(
  input logic clk, rst, set_edit, set_play, set_raw,
  output logic [1:0] mode
);
typedef enum logic [1:0] { EDIT=2'd0, PLAY=2'd1, RAW=2'd2 } sysmode_t;
sysmode_t sysmode;

always_ff @(posedge clk, posedge rst)begin
  if(rst == 1'b1)begin
    sysmode <= EDIT;
  end
  else begin
    if (set_edit)begin
      sysmode <= EDIT;
    end
    else if(set_play)begin
      sysmode <= PLAY;
    end
    else if(set_raw)begin
      sysmode <= RAW;
    end
end
end
assign mode = sysmode;
endmodule