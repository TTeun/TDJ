#include "strings.ih"

Strings::Strings(int argc, char ** argv)
: d_size(argc - 1), d_str(new string[d_size])
{
	getInput(argv);
}
