#include "strings.ih"

bool const Strings::operator!=(Strings const &other)
{
	return !(*this == other);
}