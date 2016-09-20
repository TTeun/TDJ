#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char * argv[]) {
	size_t size = argc - 1;
	for (size_t bitMask = 0; bitMask != (1 << size); ++bitMask) {
		cout << bitMask << ": ";
		for (size_t words = 0; words != size; ++words)
			if (bitMask & (1 << words))
				cout << argv[words + 1] << " ";
		cout << endl;
	}

	return 0;
}
