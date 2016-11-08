#include "matrix.ih"

bool Matrix::sizeCheck(Matrix &mat)
{
	return (d_nRows != mat.d_nRows || d_nCols != mat.d_nCols) ? false : true;
}