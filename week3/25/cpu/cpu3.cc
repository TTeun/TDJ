#include "cpu.ih"

CPU::~CPU()
{
	delete [] d_registers;
}