#include "memory.ih"

void Memory::store(std::string&& address, int value) {
	long idx = index(address);
	if (inRange(idx))
		d_memory[idx] = value;
}
