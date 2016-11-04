#include "strings.ih"

bool Strings::operator==(Strings const &other)
{
	if (d_size != other.d_size)
		return false;
	
	for(size_t counter = 0; counter != d_size; counter++)
	{
		if(at(counter) != other.at(counter))
			return false;
	}
	
	return true;
}