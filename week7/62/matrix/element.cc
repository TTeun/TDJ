#include "matrix.ih"

double* Matrix::element(std::size_t row, std::size_t col) {
    return isTransposed ? (d_data + col * d_nCols + row) :
           (d_data + row * d_nCols + col);
}
