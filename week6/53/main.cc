#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double value = 12.04;

	cout << setw(15) << value << '\n'									//without any special formatting
		 << left << setw(15) << value << '\n'							//left aligned 
		 << right << setw(15) << value << '\n'							//right aligned 
		 << setprecision(3) << showpoint << setw(15) << value << '\n'	//only the initial 3 digits of value
		 << setprecision(4) << fixed << setw(15) << value << '\n'		//using 4 numbers behind the decimal point 
		 << setprecision(2) << setw(15) << value << '\n';				//the original value once again, as in the first line, without any special formatting 

}