#include <ctype.h>
#include <iostream>
#include <unistd.h>
#include <getopt.h>
#include <string>
#include <algorithm>

using namespace std;

#include "getoptions.cc"
#include "processoptions.cc"

int main(int argc, char **argv) {
    Mode mode = getOptions(argc, argv);
    return processOptions(mode);
}
