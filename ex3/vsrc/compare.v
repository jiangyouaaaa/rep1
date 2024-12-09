module compare(
	input [3:0] A,
	input [3:0] B,
	output [3:0] result
);

reg [3:0] notb;
reg [3:0] temp;

reg carry, overflow, zero;
reg less;

assign notb = B ^ 4'b1111;
assign {carry,temp} = notb + A +4'b1;
assign overflow = (A[3] == B[3])&&(temp[3] != A[3]);
assign zero = ~(|temp);
assign less = temp[3] ~^ overflow;

assign result = (less == 0)? 4'b1:4'b0;

endmodule
