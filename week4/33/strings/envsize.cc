#include "strings.ih"

size_t Strings::envSize(char ** environ) {
    size_t size = 0;
    while (environ[size++])
    	;

    return size - 1;
}