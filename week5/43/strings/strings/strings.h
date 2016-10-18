#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <iosfwd>

class Strings
{
    size_t d_size;
    size_t d_capacity = 1;
    std::string **d_str;

    public:
        Strings();
        Strings(int argc, char *argv[]);
        Strings(char *environLike[]);
        
	private:
		size_t setCapacity();
};
        
#endif

