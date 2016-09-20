#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char * argv[]) {
    if (argc != 3) {
        cout << "Wrong input, please enter a desired radix and number" << '\n';
        return 0;
    }

    size_t radix;
    istringstream radixStr(argv[1]);
    radixStr >> radix;

    size_t num;
    istringstream numStr(argv[2]);
    numStr >> num;

    string output = "";
    char tempChar = (num % radix);
    while (num) {
        tempChar += tempChar > 9 ? ('a' - 10) : '0';
        output.insert(output.begin(), tempChar);
        num /= radix;
        tempChar = (num % radix);
    }

    cout << output << '\n';
    return 0;
}
