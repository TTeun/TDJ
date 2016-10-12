#include "strings.ih"

Strings::~strings()
{
	delete[] d_str;
}