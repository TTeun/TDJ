#include <iostream>
#include <string>

using namespace std;

int main(int argc, char * argv[]) {

	string line;
	getline (cin, line);
	line = line.substr(line.find_first_not_of(' '), line.find_last_not_of(' '));

	cout << "`" << line << "' \n";
}


