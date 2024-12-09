#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->A, 4, SW0, SW1, SW2, SW3);
	nvboard_bind_pin( &top->B, 4, SW4, SW5, SW6, SW7);
	nvboard_bind_pin( &top->ALUctr, 3, SW9, SW10, SW11);
	nvboard_bind_pin( &top->ALUout, 4, LD0, LD1, LD2, LD3);
	nvboard_bind_pin( &top->carry, 1, LD4);
	nvboard_bind_pin( &top->zero, 1, LD5);
	nvboard_bind_pin( &top->overflow, 1, LD6);
}
