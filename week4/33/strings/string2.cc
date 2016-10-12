#include "strings.ih"

Strings::Strings(char **environ)
: d_size(envSize(environ)), d_str(new string[d_size])
{
	getInput(environ);
}
