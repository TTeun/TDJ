#include "strings.ih"

Strings::Strings(int argc, char *argv[])
:
    d_size(0)
    d_capacity(new size_t(setCapacity())),
    d_str(new size_t(argc)),
{
    for (size_t begin = 0, end = argc; begin != end; ++begin)
        add(argv[begin]);
}
