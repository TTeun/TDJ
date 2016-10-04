#include "tokenizer.ih"

Opcode Tokenizer::opcode() {
	string inp;
	cin >> inp;
	if (inp.length() < 2) {
		return ERR;
	}
	switch (inp[1])
	{
	case 'o':
		return inp == "mov" ? MOV : ERR;
		break;
	case 'd':
		return inp == "add" ? ADD : ERR;
		break;
	case 'u':
		return inp == "sub" ? SUB :
		           inp == "mul" ? MUL : ERR;
		break;
	case 'i':
		return inp == "div" ? DIV : ERR;
		break;
	case 'e':
		return inp == "neg" ? NEG : ERR;
		break;
	case 's':
		return inp == "dsp" ? DSP : ERR;
		break;
	case 't':
		return inp == "stop" ? STOP : ERR;
		break;
	default:
		return ERR;
	}
}
