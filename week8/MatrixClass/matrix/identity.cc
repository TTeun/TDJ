#include "matrix.ih"

Matrix Matrix::identity(size_t dim) {
  Matrix iden(dim, dim);
  double *dataPtr = iden.row(0);
  for (size_t idx = 0; idx != dim; ++idx, dataPtr += dim + 1)
    *dataPtr = 1;
  return iden;
}
