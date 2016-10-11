#include "strings.ih"

Strings::Strings(int argc, char ** argv)
: d_size(argc - 1), d_str(new string[d_size])
{
	for (size_t inp = 0; inp < d_size; ++inp)
		d_str[inp] = string(argv[inp + 1]);
}
