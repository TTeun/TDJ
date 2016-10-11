#include "strings.ih"

void Strings::append(char * ntbs){
	string *temp = new string[d_size + 1];
	for (size_t it = 0; it < d_size; ++it)
		temp[it] = d_str[it];

	temp[d_size] = string(ntbs);
	d_size++;
	
	delete[] d_str;
	d_str = temp;
}
