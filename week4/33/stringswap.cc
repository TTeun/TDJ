#include <iostream>
#include "strings/strings.h"

using namespace std;

	void stringSwap(Strings &str1, Strings &str2){
		Strings tmp = str1;
		str1 = str2;
		str2 = tmp;
	}

int main(){

	Strings str1 = "string1";
	Strings str2 = "string2";
	

	stringSwap(str1, str2);
		
	cout << str1  << "\n" << str2 << "\n";
}
