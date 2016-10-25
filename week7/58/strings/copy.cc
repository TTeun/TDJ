#include "strings.ih"

Strings::Strings(Strings const &other)
{
   d_size = other.d_size;
   d_capacity = other.d_capacity;
   d_str = other.d_str;
}
