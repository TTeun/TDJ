#ifndef __TOKENIZER__
#define __TOKENIZER__

#include "../enums/enums.h"

class Tokenizer {
private:
	OperandType d_operandType;
	int d_value;

public:
	Tokenizer() {};
	Opcode opcode();
	void reset();
	OperandType token();
	int value();

private:
	void getNextOperand();
};

#endif