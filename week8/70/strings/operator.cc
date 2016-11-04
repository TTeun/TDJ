#include "strings.ih"

Strings &Strings::operator=(Strings const &rhs)
{
	Strings copy(rhs);
	swap(copy);
	return *this;
}
