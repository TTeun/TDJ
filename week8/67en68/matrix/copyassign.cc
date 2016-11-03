#include "matrix.h"

Matrix &Matrix::operator=(const Matrix &rvalue) {
  if (this != &rvalue) {
    delete[] d_data;
    d_nCols = rvalue.nCols();
    d_nRows = rvalue.nRows();
    d_data = new double[d_nCols * d_nRows];
    copy(rvalue);
  }
  return *this;
}
