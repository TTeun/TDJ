#include <iostream>
#include <vector>

using namespace std;

unsigned long long rawfib(unsigned long long value) {
	return value < 3 ? 1 : rawfib(value - 1) + rawfib(value - 2);
}

unsigned long long fib(unsigned long long value) {
	unsigned long long fibval[value + 1];
	fibval[1] = 1;
	fibval[2] = 1;
	for (unsigned long long index = 3; index != value + 1; ++index)
		fibval[index] = fibval[index - 1] + fibval[index - 2];

	return fibval[value];
}

int main(int argc, char * argv[]) {

	for (int index = 1; index != 15; ++index)
		cout << fib(index) << endl;

	return 0;
}