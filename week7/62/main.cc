#include <iostream>
#include "matrix/matrix.h"

using namespace std;

int main() {
    Matrix mat({{1.0, 2.0, 3.0}, {10.0, 20.0, 30.0}, {100.0, 200.0, 300.0}, {1000.0, 2000.0, 3000.0}});

    for (size_t i = 0; i < mat.nRows(); ++i) {
        for (size_t j = 0; j < mat.nCols(); ++j)
            cout << *mat.element(i, j) << ' ';
        cout << '\n';
    }
    cout << '\n';

    mat.transpose();

    for (size_t i = 0; i < mat.nRows(); ++i) {
        for (size_t j = 0; j < mat.nCols(); ++j)
            cout << *mat.element(i, j) << ' ';
        cout << '\n';
    }
}