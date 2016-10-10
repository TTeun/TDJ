#ifndef __INCLUDED__STRINGS__
#define __INCLUDED__STRINGS__

#include <string>

class Strings
{
private:
    std::string * d_str;
    size_t d_size;

public:
    Strings(int argc, char ** argv);
    std::string const &at(size_t idx) const;
    std::string &at(size_t idx);
    size_t size() const;
};




#endif