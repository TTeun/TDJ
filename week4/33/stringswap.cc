#include <iostream>

using namespace std;

void stringSwap(string str1, string str2);

int main(){

	string *str1 = "string1";
	string *str2 = "string2";
	
	void stringSwap(string *str1, string *str2)
	{
		string *tmp = str1;
		str1 = str2;
		str2 = tmp;
	}
	
	stringSwap(str1, str2);
		
	cout << str1 << str2;
	
}
