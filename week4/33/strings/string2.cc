#include "strings.ih"

Strings::Strings(char **environ){
	d_size = 0;
	while (environ[d_size++]);
	
	d_str = new string[d_size];
	for (size_t i = 0; i < d_size; ++i) 
		d_str[i] = string(environ[i]);
		
}
