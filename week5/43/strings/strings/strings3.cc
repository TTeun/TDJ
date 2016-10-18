#include "strings.ih"

Strings::Strings(char *environLike[])
:
    d_size()
    d_capacity(new size_t(setCapacity())),
    d_str(new size_t(argc)),
{

}
