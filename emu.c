#include <stdio.h>
#include "cpu.h"
#include "mem.h"

char *bootstrap_rom = " \
	31feffaf21ff9f32cb7c20fb2126ff0e113e8032e20c3ef3e2323e77773e \
	fce0471104012110801acd9500cd9600137bfe3420f311d80006081a1322 \
	230520f93e19ea1099212f990e0c3d2808320d20f92e0f18f3673e6457e0 \
	423e91e040041e020e0cf044fe9020fa0d20f71d20f20e13247c1e83fe62 \
	28061ec1fe6420067be20c3e87e2f04290e0421520d205204f162018cb4f \
	0604c5cb1117c1cb11170520f522232223c9ceed6666cc0d000b03730083 \
	000c000d0008111f8889000edccc6ee6ddddd999bbbb67636e0eecccdddc \
	999fbbb9333e3c42b9a5b9a5423c21040111a8001a13be20fe237dfe3420 \
	f506197886230520fb8620fe3e01e050";

int main() {
	mem_state_t* mem = init_mem();
	init_cpu(mem);
	while (1) {
		step_cpu();
	}
	return 0;
}
