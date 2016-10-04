#include <iostream>
#include "memory/memory.h"

int main() {
	Memory mem_obj(50);
	mem_obj.store(30, 231);
	std::cout << mem_obj.load(30) << '\n';

	return 0;
}
