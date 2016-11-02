#include "matrix.ih"

Matrix &Matrix::tr() {
  if (d_nRows != d_nCols)
    cout << "Cannot transpose a non-square matrix" << '\n';
  else {
    double *newPtr = new double[d_nCols * d_nRows];
    double *dataPtr = newPtr;
    for (size_t col = 0; col != d_nCols; ++col)
      for (size_t row = 0; row != d_nRows; ++row, ++dataPtr)
        *dataPtr = *(d_data + row * d_nRows + col);
    double *tempPtr = d_data;
    d_data = newPtr;
    delete[] tempPtr;
  }
  return *this;
}
