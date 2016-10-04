#include <iostream>
#include "memory/memory.h"

int main(){
	Memory mem_obj(50);
	mem_obj.store(std::string("@42"), 231);
	std::cout << mem_obj.load(std::string("@42")) << '\n';
	
	return 0;
}
