#include "printbigtwo.h"
#include <iostream>
#include <string>

using namespace std;
int counter = 0;

void printBigTwo(long long value)
{
	string numWithCommas = to_string(value);
	int insertPosition = numWithCommas.length() - 3;
	while (insertPosition > 0) {
		numWithCommas.insert(insertPosition, "'");
		insertPosition -= 3;
	}
	cout << numWithCommas << "\n";
}
