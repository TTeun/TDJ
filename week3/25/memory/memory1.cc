#include "memory.ih"

Memory::Memory()
: d_memory(new int [SIZE])
{
	d_memSize = RAM::SIZE;
}