#include "strings.ih"

string const &Strings::at(size_t idx) const{
    return idx >= d_size ? "" :
           string (*d_str, startIndex[idx], startIndex[idx + 1] - startIndex[idx]);

}