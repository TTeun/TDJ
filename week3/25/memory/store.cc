#include "memory.ih"

void Memory::store(int idx, int value) {
	if (inRange(idx))
		d_memory[idx] = value;
}
