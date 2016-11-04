#include "strings.ih"

bool Strings::operator!=(Strings const &other)
{
	return !(*this == other);
}