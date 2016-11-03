#include "matrix.ih"

typedef initializer_list<double> const dbl_init_list;

Matrix::Matrix(initializer_list<initializer_list<double>> iLists) {
  d_nRows = iLists.size();
  d_nCols = iLists.begin()->size();

  d_data = new double[d_nCols * d_nRows];
  double *dataPtr = d_data;

  for (auto row : iLists)
    if (row.size() == d_nCols) // row has right length
      for (auto col : row)
        *dataPtr++ = col;
    else { // rows have different length
      cout << "Rows in initializer lists have different sizes" << '\n';
      exit(1);
    }
}
