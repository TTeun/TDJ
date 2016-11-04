#include "matrix.ih"

bool Matrix::operator!=(Matrix const &mat)
{
	return !(*this == mat);
}