#include "matrix.ih"

bool Matrix::operator!=(Matrix &mat)
{
	return !(*this == mat);
}