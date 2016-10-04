#include "memory.ih"

Memory::Memory()
: d_memory(new int [RAM::SIZE])
{
	d_memSize = RAM::SIZE;
}