#include <iostream>
#include "strings/strings.h"
#include <unistd.h>


using namespace std;

int main(int argc, char **argv, char ** environ) {
    Strings const object(argc, argv);
    string str = object.at(1);
    str[0] = 's';

    cout << object.at(1) << endl;
}