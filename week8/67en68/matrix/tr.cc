#include "matrix.ih"

Matrix &Matrix::tr() {
  if (d_nRows != d_nCols)
    cout << "Cannot transpose a non-square matrix"
            " using tr(). Use transpose() instead."
         << '\n';
  else {
    double *newPtr = new double[d_nCols * d_nRows];
    double *dataPtr = newPtr;
    trCopy(dataPtr);

    double *tempPtr = d_data;
    d_data = newPtr;
    delete[] tempPtr;
  }
  return *this;
}
