#include "matrix.ih"

Matrix::Matrix(size_t rows, size_t cols)
//:
{
    d_nRows = rows;
    d_nCols = cols;
    d_data = new double[d_nRows * d_nCols];
}
