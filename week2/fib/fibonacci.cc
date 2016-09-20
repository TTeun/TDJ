#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

#include "rawfib.cc"
#include "fib.cc"
#include "superfib.cc"

int main(int argc, char * argv[]) {
	if (argc > 2)
		cout << superfib(strtoul(argv[1], NULL, 10)) << endl;
	else
		cout << fib(strtoul(argv[1], NULL, 10)) << endl;

	// cout << rawfib(strtoul(argv[1], NULL, 10)) << endl;
	return 0;
}