#include "main.ih"

void printBig(ostream& out, long long value) {
	if (value < 0){
		out << '-';
		value = value == LONG_MIN ? LONG_MAX : -1 * value;
	}
	printEm(out, value);
	out << '\n';
}
