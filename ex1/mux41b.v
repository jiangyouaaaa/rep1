module mux41b(
        input [1:0] x0,
        input [1:0] x1,
        input [1:0] x2,
        input [1:0] x3,
        input [1:0] Y,
        output [1:0] F
);
MuxKeyWithDefault #(4, 2, 2) i0 (F, Y, 2'b00, {
        2'b00, x0[1:0],
        2'b01, x1[1:0],
        2'b10, x2[1:0],
        2'b11, x3[1:0]
});
endmodule



