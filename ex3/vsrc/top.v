module top(
	input [3:0] A,
	input [3:0] B,
	input [2:0] ALUctr,
	input clk,
	input rst,
	output reg [3:0] ALUout,
	output reg carry,
	output reg zero,
	output reg overflow
);

reg [3:0] rst00x;
reg [3:0] rst010;
reg [3:0] rst011;
reg [3:0] rst100;
reg [3:0] rst101;
reg [3:0] rst110;
reg [3:0] rst111;


adder add1(.A(A), .B(B), .result(rst00x), .carry(carry), .zero(zero), .overflow(overflow));
compare cmp1(.A(A), .B(B), .result(rst110));
equal eql(.A(A), .B(B), .result(rst111));

assign rst010 = ~A;
assign rst011 = A & B;
assign rst100 = A | B;
assign rst101 = A ^ B;

MuxKeyWithDefault #(8, 3, 4) i0 (ALUout, ALUctr, 4'b0, {
	3'b000, rst00x,
	3'b001, rst00x,
	3'b010, rst010,
	3'b011, rst011,
	3'b100, rst100,
	3'b101, rst101,
	3'b110, rst110,
	3'b111, rst111
});

endmodule
