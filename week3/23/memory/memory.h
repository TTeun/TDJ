#include "../enums/enums.h"
#include <string>

class Memory
{
private:
	int * const d_memory;
	int d_memSize;

public:
	Memory();
	Memory(int size);
	~Memory();

	void store(int idx, int value);
	int load(int idx);

private:
	bool inRange(int idx);
};
