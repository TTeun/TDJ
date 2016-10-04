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

	void store(int, int);
	int load(int);

private:
	bool inRange(int);
};
