#include "strings.ih"

Strings::Strings(Strings &&tmp)
:
	d_capacity(tmp.d_capacity),
	d_size(tmp.d_size),
	d_str(tmp.d_str)
{
	tmp.d_size = 0;
	tmp.d_capacity = 1;
	tmp.d_str = nullptr;
}