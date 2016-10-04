#include "memory.ih"

Memory::~Memory()
{
	free(d_memory);
}
