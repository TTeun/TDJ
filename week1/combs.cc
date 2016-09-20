#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char * argv[]) 
{
	size_t numOfWords = argc - 1;
	for (size_t bitMask = 0; bitMask != (1 << numOfWords); ++bitMask) {
		cout << bitMask << ": ";
		for (size_t words = 0; words != numOfWords; ++words)
			if (bitMask & (1 << words))
				cout << argv[words + 1] << " ";
		cout << '\n';
	}

	return 0;
}
