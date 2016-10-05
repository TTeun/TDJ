#include "../enums/enums.h"
#include "../memory/memory.h"

class Tokenizer {
public:
	Tokenizer() {};
	Opcode opcode() {return ADD;};
	void reset() {};
};

class CPU
{
private:
	int NREGISTERS = 5;
    int * const d_registers;
    Memory *d_memory;
    Tokenizer d_tokenizer;

public:
	CPU(Memory * memory);
	CPU(Memory * memory, int requiredRGSTR);
	~CPU();

	void start();

	bool error();
	void mov() {};
	void add() {};
	void sub() {};
	void mul() {};
	void div() {};
	void neq() {};
	void dsp() {};

};