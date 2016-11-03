#include "matrix.ih"

Matrix Matrix::operator+=(Matrix const &mat)
{
	if (d_nRows != mat.d_nRows || d_nCols != mat.d_nCols){
		cerr << "Matrix sizes do not match.\n";
		return (*this);
	}
	Matrix new_mat(*this);
	for(size_t counter = 0; counter != (d_nCols * d_nRows); counter++)
		new_mat.d_data[counter] += mat.d_data[counter];

	swap(new_mat, *this);
	
	return new_mat;
}