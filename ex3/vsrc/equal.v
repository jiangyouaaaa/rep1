module equal(
	input [3:0] A,
        input [3:0] B,
	output [3:0] result
);

reg [3:0] notb;

assign notb = B ^ 4'b1111;
reg carry;
reg overflow;
reg zero;
wire [3:0]temp;

assign {carry, temp} = notb + A + 4'b1;
assign overflow = (A[3] == B[3])&&(temp[3] != A[3]);
assign zero = ~(|temp);

assign result = (zero == 1)? 4'b1 : 4'b0;

endmodule
