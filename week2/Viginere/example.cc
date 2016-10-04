#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main(int argc, char * argv[]){
	
	string key = argv[1];
	char ch;
	while ((ch = cin.get()) != -1){
		cout << static_cast<char>(ch + 1);
	}
		
	
	return 0;
}
