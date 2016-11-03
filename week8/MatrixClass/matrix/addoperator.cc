#include "matrix.ih"

Matrix Matrix::operator+(Matrix const &mat)
{
	if (d_nRows != mat.d_nRows || d_nCols != mat.d_nCols){
		cerr << "Matrix sizes do not match.\n";
		return (*this);
	}
	
	Matrix new_mat(*this);
	new_mat += mat;
	
	return new_mat;
}