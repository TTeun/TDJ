#include "memory.ih"

bool Memory::inRange(int value) {
	return (0 <= value && value < d_memSize);
}
