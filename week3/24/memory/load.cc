#include "memory.ih"

int Memory::load(std::string&& address) {
	long idx = index(address);
	return inRange(idx) ? d_memory[idx] : 0;
}
