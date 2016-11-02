#include "matrix.ih"

double *Matrix::row(size_t idx){
    return safeRow(idx);
}

double *Matrix::row(size_t idx) const{
    return safeRow(idx);
}

double *Matrix::safeRow(size_t idx) const{
  static double *empty;
  empty = nullptr;
  return idx < d_nRows ? (d_data + idx * d_nCols) : empty;
}
