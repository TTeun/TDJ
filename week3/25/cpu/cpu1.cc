#include "cpu.ih"

CPU::CPU(Memory * memory)
: d_registers(new int[NREGISTERS]), d_tokenizer()
{
	d_memory = memory;
}