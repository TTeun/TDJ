#include "matrix.ih"

bool const Matrix::sizeCheck(Matrix const &mat)
{
	return (d_nRows != mat.d_nRows || d_nCols != mat.d_nCols) ? false : true;
				// return false;	
			
}