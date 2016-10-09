#include "strings.ih"

size_t Strings::ntbsSize(char *ntbs) {
    size_t size = 0;
    while (ntbs[size] != 0)
        size++;

    return size;
}
