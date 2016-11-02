#include "matrix/matrix.h"
#include <iostream>

using namespace std;

void toIdentity(Matrix *mat){
  *mat = Matrix::identity(mat->nCols());
}

int main() {
  Matrix mat({{1.0, 2.0, 3.0},
              {10.0, 20.0, 30.0},
              {100.0, 200.0, 300.0}});

  for (size_t row = 0; row < mat.nRows(); ++row) {
    for (double *el = mat.row(row); el != mat.row(row) + mat.nCols(); ++el)
      cout << *el << ' ';
    cout << '\n';
  }

  // mat = Matrix::identity(15);
  mat = mat.tr();

  // toIdentity(&mat);

  for (size_t row = 0; row < mat.nRows(); ++row) {
    for (double *el = mat.row(row); el != mat.row(row) + mat.nCols(); ++el)
      cout << *el << ' ';
    cout << '\n';
  }
}
