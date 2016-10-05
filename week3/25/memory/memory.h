#ifndef __MEMORY__
#define __MEMORY__

#include "../enums/enums.h"
#include <string>

class Memory
{
private:
    int d_memSize;
	int * const d_memory;

public:
	Memory();
	Memory(int size);
	~Memory();

	void store(int idx, int value);
	int load(int idx);

private:
	bool inRange(int idx);
};

#endif