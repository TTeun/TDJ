#include "main.ih"

void printEm(ostream& out, long long value) {
    if (value < 1000) {
        out << value;
        return;
    }
    printEm(out, value / 1000);
    out << '\'' << setfill('0') << setw(3) << (value % 1000);
}
