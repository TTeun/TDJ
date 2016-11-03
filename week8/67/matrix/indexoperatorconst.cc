#include "matrix.ih"

double const *Matrix::operator[](int value) const
   {
      return row(value);
   }