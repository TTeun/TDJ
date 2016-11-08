#include "matrix.ih"

Matrix const Matrix::operator+(Matrix const &mat)
{
	if (!sizeCheck(mat)){
		cerr << "Matrix sizes do not match.\n";
		return (*this);
	}
	
	Matrix new_mat(*this);
	new_mat += mat;
	
	return new_mat;
}