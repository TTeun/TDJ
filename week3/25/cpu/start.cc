#include "cpu.ih"

void CPU::start() {
	bool running = true;
	while (running) {
		switch (d_tokenizer.opcode())
		{
		case ERR:
			error();
		case ADD:
			add();
			break;
		case MOV:
			mov();
			break;
		case SUB:
			sub();
			break;
		case MUL:
			mul();
			break;
		case DIV:
			div();
			break;
		case NEG:
			neq();
			break;
		case DSP:
			dsp();
			break;
		case STOP:
			running = false;
			break;
		default:
			break;
		}
		d_tokenizer.reset();
	}

}