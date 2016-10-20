#include "strings.ih"

void Strings::cpyBeforeAdd() {
    string *temp = new string[d_size + 1];
    for (size_t it = 0; it < d_size; ++it)
        temp[it] = d_str[it];

    d_size++;
    delete[] d_str;
    d_str = temp;

}