#include "matrix.ih"

Matrix &Matrix::tr()
{
    if (d_nRows != d_nCols)
    {
        cerr << "Matrix::tr requires square matrix\n";
        exit(1);
    }

    for (size_t row = 1; row != d_nRows; ++row)
    {
        for (size_t col = 0; col != row; ++col)
        {
            double tmp = el(row, col);
            el(row, col) = el(col, row);
            el(col, row) = tmp;
        }
    }

    return *this;
}
