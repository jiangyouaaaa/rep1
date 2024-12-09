module adder(
	input [3:0] A,
	input [3:0] B,
	output [3:0] result,
	output carry,
	output zero,
	output overflow
);
//进位out_c和溢出overflow不就一样了吗？
assign {carry,result} = A + B;
assign overflow = (A[3] == B[3])&&(result[3] != A[3]);
assign zero = ~(|result);

endmodule
