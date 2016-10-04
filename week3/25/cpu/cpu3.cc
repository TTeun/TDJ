#include "cpu.ih"

CPU::~CPU()
{
	free(d_registers);
}