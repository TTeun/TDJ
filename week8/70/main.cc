#include "main.ih"

int main(int argc, char** argv){
	Strings test, test2;
	test.add("text");
	test.add("more");
	test2.add("teext");
	test2.add("more");
	cout << test.at(0) << "\n" << test.at(1) << "\n";
	if (test==test2)
		cout << "equality! \n";
	if (test!=test2)
		cout << "inequality! \n";
}