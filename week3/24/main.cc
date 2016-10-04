#include <iostream>
#include "enums/enums.h"
#include "memory/memory.h"
#include "cpu/cpu.h"

int main() {
	Memory mem_obj;
	CPU cpu_obj(&mem_obj);
	cpu_obj.start();

	return 0;
}
