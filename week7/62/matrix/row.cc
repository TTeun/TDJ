#include "matrix.ih"

double *Matrix::row(size_t idx){
    return d_data + idx * d_nCols;
}

double *Matrix::row(size_t idx) const{
    return d_data + idx * d_nCols;
}