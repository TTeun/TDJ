#include "matrix.ih"

Matrix::Matrix(Matrix const &other)
    : d_nCols(other.nCols()),
      d_nRows(other.nRows())
{
  d_data = new double[d_nCols * d_nRows];
  copy(other);
}
