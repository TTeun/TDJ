#include "matrix.ih"

Matrix Matrix::transpose() {
  Matrix trans(d_nCols, d_nRows);
  double *dataPtr = trans.row(0);
  trCopy(dataPtr);
  return trans;
}
