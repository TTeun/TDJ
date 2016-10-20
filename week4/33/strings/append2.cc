#include "strings.ih"

void Strings::append(string &str) {
    cpyBeforeAdd();
    d_str[d_size - 1] = str;
}
