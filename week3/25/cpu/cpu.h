#include "../enums/enums.h"
#include "../memory/memory.h"
#include "../tokenizer/tokenizer.h"

class CPU
{
private:
	int NREGISTERS = 5;
	int * const d_registers;
	Memory *d_memory;
	Tokenizer d_tokenizer;


typedef struct Operand {
	OperandType type;
	int value;
} Operand;

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