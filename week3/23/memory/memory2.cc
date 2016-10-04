#include "memory.ih"

Memory::Memory(int size)
: d_memory(new int [size])
{
	d_memSize = size;
}
