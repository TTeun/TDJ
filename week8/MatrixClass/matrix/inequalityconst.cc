#include "matrix.ih"

bool const Matrix::operator!=(Matrix const &mat)
{
	return !(*this == mat);
}