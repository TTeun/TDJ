#include "strings.ih"

void Strings::append(char * ntbs){
    cpyBeforeAdd();
	d_str[d_size - 1] = string(ntbs);
}
