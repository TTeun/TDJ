#include <iostream>

using namespace std;

void inv_identity(int (*row)[10]);

int main()
{
    int square[10][10] = {0};
    int (*row)[10] = &square[0];

    inv_identity(row);
}
