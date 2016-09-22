#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <iomanip>

using namespace std;

void printBig2(ostream& out, long long value) {
    string separatedValue = to_string(value);
    int whereToInsert = separatedValue.length();
    while ((whereToInsert -= 3) > 0)
        separatedValue.insert(whereToInsert, "'");

    out << separatedValue << '\n';
}

void printBig1(ostream& out, long long value) {
    if (value < 1000) {
        out << value;
        return;
    }
    printBig1(out, value / 1000);
    out << '\'' << setfill('0') << setw(3) << (value % 1000);
}

int main(int argc, char * argv[]) {
    long long value = stoul(argv[1]);
    printBig2(cout, value);
    printBig1(cout, value);
    return 0;
}