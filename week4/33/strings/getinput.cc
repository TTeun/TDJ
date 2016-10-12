#include "strings.ih"

void Strings::getInput(char **inp) {
	for (size_t it = 0; it < d_size; ++it)
		d_str[it] = string(inp[it]);
}