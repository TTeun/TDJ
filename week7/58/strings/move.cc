#include "strings.ih"

Strings::Strings(Strings &&tmp)
:
	d_capacity(tmp.d_capacity),
	d_size(tmp.d_size)
{
	tmp.d_size = 0;
	tmp.d_capacity = 1;
}
