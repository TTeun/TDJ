#include "matrix.ih"

Matrix Matrix::transpose() {
  Matrix trans(d_nCols, d_nRows);
  double *colPtr;
  for (size_t row = 0; row != d_nCols; ++row) {
    colPtr = trans.row(row);
    for (size_t col = 0; col != d_nRows; ++col)
      *colPtr++ = *(d_data + col * d_nCols + row);
  }
  return trans;
}