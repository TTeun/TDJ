#include "memory.ih"

int Memory::load(int idx) {
	return inRange(idx) ? d_memory[idx] : 0;
}
