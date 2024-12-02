#include "verilated.h"
#include "verilated_vcd_c.h"
#include <nvboard.h>
#include "Vmux41b.h"
#include "Vmux41b__024root.h"

nvboard_bind_all_pins(&dut);
nvboard_init();

while(1) {

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static mux41b* top;

void step_and_dump_wave(){
	top->eval();
	contextp->timeInc(1);
	tfp->dump(contextp->time());
}

void sim_init(){
	contextp = new VerilatedContext;
	tfp = new VerilatedVcdC;
	top = new mux41b;
	contextp->traceEverOn(true);
	top->trace(tfp, 0);
	tfp->open("dump.vcd");
}

void sim_exit(){
	step_and_dump_wave();
	tfp->close();
}

int main(){
	sim_init();
        top->y=0b00;  top->x0=0b11; top->x1=0b01; top->x2=0b00;  top->x3=0b10; step_and_dump_wave();
                      top->x0=0b10; top->x1=0b01; top->x2=0b01;  top->x3=0b00; step_and_dump_wave();
        top->y=0b01;  top->x0=0b11; top->x1=0b01; top->x2=0b00;  top->x3=0b10; step_and_dump_wave();
                      top->x0=0b10; top->x1=0b01; top->x2=0b01;  top->x3=0b00; step_and_dump_wave();
        top->y=0b10;  top->x0=0b11; top->x1=0b01; top->x2=0b00;  top->x3=0b10; step_and_dump_wave();
                      top->x0=0b10; top->x1=0b01; top->x2=0b01;  top->x3=0b00; step_and_dump_wave();
        top->y=0b11;  top->x0=0b11; top->x1=0b01; top->x2=0b00;  top->x3=0b10; step_and_dump_wave();
                      top->x0=0b10; top->x1=0b01; top->x2=0b01;  top->x3=0b00; step_and_dump_wave();
        sim_exit();
}
nvboard_update();
}
nvboard_quit();
