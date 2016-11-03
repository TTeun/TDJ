#include "matrix.ih"

void Matrix::copy(Matrix const &other) {
  double *dataPtr = d_data;
  double *rowStart = other.row(0);
  for (size_t rowIt = 0; rowIt != d_nRows; ++rowIt) {
    for (size_t colIt = 0; colIt != d_nCols; ++colIt)
      *dataPtr++ = *rowStart++;
  }
}
