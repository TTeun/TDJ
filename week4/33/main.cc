#include <iostream>
#include "strings/strings.h"
#include <unistd.h>


using namespace std;

int main(int argc, char **argv, char ** environ) {
    Strings object(argc, argv);

    cout << object.at(0) << endl;
	char next[] = "Hallo Dani";
	
	object.append(&next[0]);
	
    cout << object.at(1) << endl;


}
