#ifndef __INCLUDED__STRINGS__
#define __INCLUDED__STRINGS__

#include <string>

class Strings
{
private:
    std::string * const d_str;
    size_t d_size;
    size_t * const startIndex;


public:
    Strings(int argc, char ** argv);
    size_t size() const;
    std::string const &at(size_t idx) const;

private:
    static size_t ntbsSize(char * ntbs);
};




#endif