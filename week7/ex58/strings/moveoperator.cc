#include "strings.ih"

Strings &Strings::operator=(Strings &&rhs)
{
   if (this != &rhs)
   {
	   delete[] d_str;
	   
	   d_size = rhs.d_size;
	   d_capacity = rhs.d_capacity;
	   d_str = rhs.d_str;
	   
	   rhs.d_size = 0;
	   rhs.d_capacity = 1;
	   rhs.d_str = nullptr;
   }
   return *this;
}