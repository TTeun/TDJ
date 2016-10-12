#include <iostream>

using namespace std;

void inv_identity(int (*row)[10]);

int main()
{
    int square[10][10];
    int (*row)[10] = &square[0];

    inv_identity(row);

    for (size_t row = 0; row != 10; ++row) {
        for (size_t col = 0; col != 10; ++col)
            cout << square[row][col] << ' ';
        cout << '\n';
    }
}
