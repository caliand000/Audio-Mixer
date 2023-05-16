module prienc8to3(
  input logic [7:0] in,  // 7 - 0: highest - lowest priority
  output logic [2:0] out, // Encoded output
  output logic G        // Strobe output (asserted when any input)
);     
assign {out,G} = in[7] == 1 ? 4'b1111 /* Input 7 is high */ :
               in[6] == 1 ? 4'b1101 /* Input 6 is high */ :
               in[5] == 1 ? 4'b1011 /* Input 5 is high */ :
               in[4] == 1 ? 4'b1001 /* Input 4 is high */ :
               in[3] == 1 ? 4'b0111 /* Input 3 is high */ :
               in[2] == 1 ? 4'b0101 /* Input 2 is high */ :
               in[1] == 1 ? 4'b0011 /* Input 1 is high */ :
               in[0] == 1 ? 4'b0001 /* Input 0 is high */ :
                           4'b0000; // Nothing pressed.
endmodule