#include "matrix.ih"

double *Matrix::operator[](int value)
   {
      return row(value);
   }