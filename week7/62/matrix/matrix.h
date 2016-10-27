#ifndef INCLUDED_MATRIX_
#define INCLUDED_MATRIX_

#include <initializer_list>
#include <cstdlib>              // size_t

class Matrix
{
private:
    double *d_data;
    std::size_t d_nRows = 0;
    std::size_t d_nCols = 0;

public:
    Matrix();
    Matrix(std::size_t rows, std::size_t cols);
    ~Matrix();
    Matrix(std::initializer_list<std::initializer_list<double>> iList);
    size_t nRows();
    size_t nCols();
    double *row(size_t idx);
    double *row(size_t idx) const;

private:
};

#endif