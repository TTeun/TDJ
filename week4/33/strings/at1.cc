#include "strings.ih"

string &Strings::at(size_t idx) {
    if (idx < d_size)
        return d_str[idx];
    cout << "Index is out of bounds" << '\n';
}
