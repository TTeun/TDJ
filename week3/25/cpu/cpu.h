#include "../enums/enums.h"
#include "../memory/memory.h"
#include "../tokenizer/tokenizer.h"

class CPU
{
private:
	Memory *d_memory;
	Tokenizer d_tokenizer;
	int * const d_registers;
	int NREGISTERS = 5;


typedef struct Operand {
	OperandType type;
	int value;
} Operand;

public:
	CPU(Memory *);
	CPU(Memory *, int);
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