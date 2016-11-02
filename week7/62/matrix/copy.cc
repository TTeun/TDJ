#include "matrix.ih"

void Matrix::copy(Matrix const &other) {

  double *dataPtr = d_data;
  double *rowStart;
  for (size_t rowIt = 0; rowIt != d_nRows; ++rowIt) {
    rowStart = other.row(rowIt);
    for (double *col = rowStart; col != rowStart + d_nCols;)
      *dataPtr++ = *col++;
  }
}
