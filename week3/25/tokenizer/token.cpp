#include "tokenizer.ih"

int Tokenizer::token(){
	getNextOperand();
	return d_operandType;
}