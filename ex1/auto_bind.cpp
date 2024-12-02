#include <nvboard.h>
#include "Vmux41b.h"

void nvboard_bind_all_pins(Vmux41b* top) {
	nvboard_bind_pin( &top->Y, 2, SW0, SW1);
	nvboard_bind_pin( &top->x0, 2, SW2, SW3);
	nvboard_bind_pin( &top->x1, 2, SW4, SW5);
	nvboard_bind_pin( &top->x2, 2, SW6, SW7);
	nvboard_bind_pin( &top->x3, 2, SW8, SW9);
	nvboard_bind_pin( &top->F, 2, LD0, LD1);
}
