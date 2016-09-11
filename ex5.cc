#include <iostream>
#include <string>

using namespace std;

int main()
{
	int internalVariable = 0;
	string inputLine;	
	int inputVariable;
	char instruction;

	while(1)
	{
		cout << "> ";

		cin >> inputLine;		// read the instruction from the command line
		instruction = inputLine[2];

		if (instruction == 't')		// if the instruction is "ret" exit the programm
		{
			break;
		}

		cin >> inputLine;		// read the variable for computation
		inputVariable = stoi(inputLine);

		switch(instruction)		// do stuff depending on the obtained instruction
		{
			case 'o':
				internalVariable = inputVariable;
				break;
			case 'd':
				internalVariable += inputVariable;
				break;
			case 'b':
				internalVariable -= inputVariable;
				break;
			case 'l':
				internalVariable *= inputVariable;
				break;
			case 'v':
				if (inputVariable == 0)
				{
					cout << "Division by 0 is not allowed! \n";
					break;			
				}
				internalVariable /= inputVariable;
				break;
			default:
				cout << "Wrong command, use sto x, add x, sub x, mul x, div x or ret \n";
		}
		
		cout << "x = " << internalVariable << "\n";		// print actual value to the command line
	}
}
		
