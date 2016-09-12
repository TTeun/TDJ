#include <iostream>
#include <string>

using namespace std;

int main()
{

	enum Type
	{
		UNKNOWN, ERROR, OK
	};
	
	int internalVariable = 0;
	string inputLine;
	string inputNumber;	
	int inputVariable;
	char instruction;
	int typeFlag = UNKNOWN;

	while(1)
	{
		cout << "> ";

		cin >> inputLine;		// read the instruction from the command line
		instruction = inputLine[2];
		cin >> inputNumber;		// read the variable for computation
		inputVariable = stoi(inputNumber);

		if (inputLine == "ret")		// if the instruction is "ret" exit the programm
		{
			break;
		}


		switch(instruction)		// do stuff depending on the obtained instruction
		{
			case 'o':
				if (inputLine == "sto")
				{
					internalVariable = inputVariable;
					typeFlag = OK;
					break;
				}
			case 'd':
				if (inputLine == "add")
				{
					internalVariable += inputVariable;
					typeFlag = OK;
					break;
				}	
			case 'b':
				if (inputLine == "sub")
				{
					internalVariable -= inputVariable;
					typeFlag = OK;
					break;
				}
			case 'l':
				if (inputLine == "mul")
				{
					internalVariable *= inputVariable;
					typeFlag = OK;
					break;
				}
			case 'v':
				if (inputLine == "div")
				{
					if (inputVariable == 0)
					{
						cout << "Division by 0 is not allowed! \n";
						typeFlag = ERROR;
						break;			
					}
					internalVariable /= inputVariable;
					typeFlag = OK;
					break;
				 }
			default:
				cout << "Wrong command, use sto x, add x, sub x, mul x, div x or ret \n";
				typeFlag = ERROR;
		}
		
		if (typeFlag == OK)
		{
			cout << "x = " << internalVariable << "\n";		// print actual value to the command line
		}
	}
}
		
