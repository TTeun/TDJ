#include "main.ih"

void printBigAlt(ostream& out, long long value) {
    string valToPrint = std::to_string(value);
	for (int insPos = valToPrint.length() - 3; insPos > 0; insPos -= 3)
	    valToPrint.insert(insPos, "'");

    out << valToPrint << '\n';
}
