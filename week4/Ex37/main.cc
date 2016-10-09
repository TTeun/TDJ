#include <iostream>

using namespace std;

void inv_identity(int (*rowPointer)[10]);
	
int main()
{
	int square[10][10];
		
	int (*row)[10] = square;
	for(int k = 0; k < 10; k++)
	{
		(*row)[k] = square[k][0];
	}
	
inv_identity(row);
}
