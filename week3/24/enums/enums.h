#ifndef __ENUMS__
#define __ENUMS__


// The enums!

namespace RAM {
	enum RAM
	{
		SIZE = 20
	};
}

enum Opcode
{
	ERR,
	MOV,
	ADD,
	SUB,
	MUL,
	DIV,
	NEG,
	DSP,
	STOP
};


enum OperandType
{
	SYNTAX,
	VALUE,
	REGISTER,
	MEMORY
};

#endif
