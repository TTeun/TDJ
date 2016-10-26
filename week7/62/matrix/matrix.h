#ifndef INCLUDED_MATRIX_
#define INCLUDED_MATRIX_

#include <initializer_list>
#include <cstdlib>              // size_t

class Matrix
{
private:
    double *d_data;
    std::size_t d_nRows;
    std::size_t d_nCols;
    bool isTransposed = false;

public:
    Matrix();
    Matrix(std::size_t rows, std::size_t cols);
    ~Matrix();
    Matrix(std::initializer_list<std::initializer_list<double> > iList);
    size_t nRows();
    size_t nCols();
    double *element(std::size_t row, std::size_t col);
    void transpose();

private:
};

#endif