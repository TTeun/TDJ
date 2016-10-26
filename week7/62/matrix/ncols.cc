#include "matrix.ih"

size_t Matrix::nCols() {
    return isTransposed ? d_nRows : d_nCols;
}