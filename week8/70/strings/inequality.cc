#include "strings.ih"

bool Strings::operator!=(Strings &other)
{
	return !(*this == other);
}