#include "matrix.ih"

void Matrix::trCopy(double *dataPtr) {
  for (size_t col = 0; col != d_nCols; ++col)
    for (size_t row = 0; row != d_nRows; ++row)
      *dataPtr++ = *(d_data + row * d_nCols + col);
}
