#include <iostream>
#include "main.ih"

using namespace std;

int main(int argc, char **argv) {
    Mode mode = getOptions(argc, argv);
    return processOptions(mode);
}
