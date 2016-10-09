#include <iostream>
#include "strings/strings.h"
#include <unistd.h>


using namespace std;

int main(int argc, char **argv, char ** environ) {
    Strings object(argc, argv);


    string const *str = object.at(object.size()-1);
}