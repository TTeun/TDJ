#include <iostream>
#include "matrix/matrix.h"

using namespace std;

int main() {
    Matrix mat({{1.0, 2.0, 3.0}, {10.0, 20.0, 30.0}, {100.0, 200.0, 300.0}, {1000.0, 2000.0, 3000.0}});

    for (size_t row = 0; row < mat2.nRows(); ++row) {
        for (double *el = mat2.row(row); el != mat2.row(row) + mat2.nCols(); ++ el)
            cout << *el << ' ';
        cout << '\n';
    }

}
