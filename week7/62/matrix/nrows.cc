#include "matrix.ih"

size_t Matrix::nRows() {
    return isTransposed ? d_nCols : d_nRows;
}