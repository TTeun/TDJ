#include "memory.ih"

long Memory::index(std::string& address) {
	return stoi(address.erase(0, 1));
}
