#include "matrix.ih"

Matrix Matrix::identity(size_t dim) {
  Matrix iden(dim, dim);
  for (size_t idx = 0; idx != dim; ++idx)
    *(iden.row(idx) + idx) = 1;
  return iden;
}
