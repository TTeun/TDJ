#include "matrix.ih"

bool Matrix::operator==(Matrix const &mat)
{
	if (d_nRows != mat.d_nRows || d_nCols != mat.d_nCols)
		return false;
	
	for(size_t counter = 0; counter != (d_nCols * d_nRows); counter++)
	{
		if(d_data[counter] != mat.d_data[counter])
			return false;
	}
	
	return true;

}