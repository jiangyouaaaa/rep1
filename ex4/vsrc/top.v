module top(
	input press,
	input clk,
	input rst,
	output reg [6:0] seg1,
	output reg [6:0] seg2
);
//使用了行为建模，不知道行不行

reg [7:0] num;
wire [3:0] num1;
wire [3:0] num2;

always@(posedge press)begin
	if(rst)
		num <= 8'b0;
	else begin
		num[6:0] <= num[7:1];
		num[7] <= num[4] ^ num[3] ^ num[2] ^ num[0] ^(num == 8'b00000000);
	end
end

assign num1 = num[3:0];
assign num2 = num[7:4];

bcd7seg segA(
	.b(num1),
	.h(seg1)
);

bcd7seg segB(
	.b(num2),
	.h(seg2)
);


endmodule
