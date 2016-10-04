#include <iostream>
#include "enums/enums.h"
#include "memory/memory.h"


int main(){
	Memory obj(50);
	obj.store(std::string("@42"), 231);
	std::cout << obj.load(std::string("@42")) << '\n';
	
	return 0;
}
