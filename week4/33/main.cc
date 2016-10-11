#include <iostream>
#include "strings/strings.h"
#include <unistd.h>


using namespace std;

extern char **environ;

int main(int argc, char **argv, char ** environ) {
    //Strings object(argc, argv);
	Strings object(environ);

	for (size_t i = 0; i < object.size(); ++i)
		cout << object.at(i) << '\n';

}
