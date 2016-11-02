#include "matrix.ih"

Matrix::Matrix(Matrix const &other)
    : d_nCols(other.nCols()),
      d_nRows(other.nRows())
{
  d_data = new double[d_nCols * d_nRows];
  double *dataPtr = d_data;
  double *rowStart;

  for (size_t rowIt = 0; rowIt != d_nRows; ++rowIt) {
    rowStart = other.row(rowIt);
    for (double *col = rowStart; col != rowStart + d_nCols;)
      *dataPtr++ = *col++;
  }
}
