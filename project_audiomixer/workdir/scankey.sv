module scankey(
   input logic clk,
   input logic rst,
   input logic [19:0] in,
   output logic [4:0] out,
   output logic strobe
 );
 logic keyclk;
 logic [1:0] delay;

 always_ff @ (posedge clk)begin
   delay <= (delay << 1) | {1'b0, keyclk};

 end
 assign strobe = delay[1];
 assign out[0] = in[1] | in[3] | in[5] | in[7] | in[9] | in[11] | in[13] | in[15] | in[17] | in[19];
 assign out[1] = in[2] | in[3] | in[6] | in[7] | in[10] | in[11] | in[14] | in[15] | in[18] | in[19];
 assign out[2] = in[4] | in[5] | in[6] | in[7] | in[12] | in[13] | in[14] | in[15];
 assign out[3] = |(in[15:8]);
 assign out[4] = |(in[19:16]);
 assign keyclk = |(in[19:0]);

 endmodule