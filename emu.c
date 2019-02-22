#include <stdio.h>
#include "cpu.h"
#include "mem.h"
#include "screen.h"
#include <SDL2/SDL.h>

int main() {
	mem_state_t* mem = init_mem();
	init_cpu(mem);
	init_screen();

	while(1) {
		draw_screen();
	}

	return 0;

	/*
	while (1) {
		if (step_cpu()) {
			return -1;
		}
	}
	return 0;
	*/
}
