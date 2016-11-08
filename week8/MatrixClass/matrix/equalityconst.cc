#include "matrix.ih"

bool const Matrix::operator==(Matrix const &mat)
{
	if (!sizeCheck(mat)){
		return false;
	}
	
	size_t nElements = size();
	
	for (size_t counter = 0; counter != nElements; ++counter)
	{
		if(d_data[counter] != mat.d_data[counter])
			return false;
	}
	
	return true;
}