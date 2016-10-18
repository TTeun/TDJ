#include "strings.ih"

	size_t Strings::setCapacity(){
	while (d_size > (d_capacity *= 2))
		;
	
}
