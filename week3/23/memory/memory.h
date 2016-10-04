#include "../enums/enums.h"
#include <string>

class Memory
{
private:
	int * const d_memory;
	int d_memSize;

public:
	Memory();
	Memory(int);
	~Memory();

	void store(std::string&&, int);
	int load(std::string&& );

private:
	bool inRange(int);
	long index(std::string&);
};
