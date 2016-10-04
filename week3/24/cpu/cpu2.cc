#include "cpu.ih"

CPU::CPU(Memory * memory, int requiredRGSTR)
: d_registers(new int[requiredRGSTR])
{
	NREGISTERS = requiredRGSTR;
	d_memory = memory;
}