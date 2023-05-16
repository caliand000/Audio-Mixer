module clkdiv #(
    parameter BITLEN = 8
) (
  input logic clk,
  input logic rst,
  input logic [BITLEN-1:0] lim,
  output logic hzX
);
  logic hz1;
  logic [BITLEN-1:0]ctr;

always_ff @ (posedge clk, posedge rst) begin

    if(rst == 1'b1)begin
      hz1 = 0;
    end

    else begin
      hz1 = (ctr == lim);
    end
  end

  always_ff @ (posedge hz1, posedge rst) begin

    if(rst == 1'b1)begin
      hzX = 0;
    end
    else begin
      hzX = ~hzX;
    end
  end

  logic [BITLEN-1:0] next_Q; // next-state values
  always_ff @ (posedge clk, posedge rst) begin // state variables

    if(rst == 1'b1)begin
      ctr <= 0;
      end

    else begin
      ctr <= next_Q;
    end
  end

  always_comb begin // next-state equations
        next_Q = ctr;
        if(ctr == lim)begin
          next_Q = 0;
        end
        else begin
          next_Q = ctr + 1;
        end
      end
endmodule
