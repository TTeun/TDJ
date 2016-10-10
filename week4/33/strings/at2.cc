#include "strings.ih"

string const &Strings::at(size_t idx) const {
    if (idx < d_size)
        return d_str[idx];
    cout << "Index is out of bounds" << '\n';
}