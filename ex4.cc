#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
	size_t numberOfArgs = argc - 1;
	size_t numberOfCombs = pow(2, numberOfArgs);

	string combs[numberOfCombs];
	combs[0] = " ";

	for(size_t wordCounter = 1; wordCounter != (numberOfArgs + 1); ++wordCounter)
	{
		size_t startPoint = pow(2, (wordCounter - 1));
		size_t endPoint = (pow(2, wordCounter) - 1);

		for(size_t counter = startPoint; counter != (endPoint + 1); ++counter)
		{
			combs[counter] = combs[counter - startPoint] + " " + argv[wordCounter];
		}
	}

	for(size_t iter = 0; iter != numberOfCombs; ++iter)
	{
		cout << iter << ": " << combs[iter] << "\n";
	}
}

		
			


