#include "matrix.ih"

Matrix const Matrix::operator+=(Matrix const &mat)
{
	if (!sizeCheck(mat)){
		cerr << "Matrix sizes do not match.\n";
		return (*this);
	}
	
	size_t nElements = size();
	
	for (size_t counter = 0; counter != nElements; ++counter)
		(*this).d_data[counter] += mat.d_data[counter];

	return *this;
}