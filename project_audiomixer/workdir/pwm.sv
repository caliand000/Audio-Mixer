module pwm#(
    parameter int CTRVAL = 256,
    parameter int CTRLEN = $clog2(CTRVAL)
)
(
    input logic clk, rst, enable,
    input logic [CTRLEN-1:0] duty_cycle,
    output logic [CTRLEN-1:0] counter,
    output logic pwm_out
);

	logic [CTRLEN - 1:0] s;
	assign s  = CTRVAL[CTRLEN - 1:0];
    always_ff @(posedge clk, posedge rst)begin
        if(rst == 1'b1)begin
            counter <= 0;
        end
        else if(enable == 1'b1)begin
            counter <= counter + 1'b1;
        end
    end
    always_comb begin
        if(counter <= duty_cycle)begin
            pwm_out = 1;
        end
        else if(duty_cycle == s)begin
            pwm_out = 0;
        end
         else if(duty_cycle == s)begin
            pwm_out = 1;
        end
        else    
            pwm_out = 0;
    end
endmodule
