#include "main.ih"

Vars arguments(int argc, char* key)
{
	Vars vars;
	vars.key = string(key);
	vars.len = vars.key.size();
	switch(argc)
	{
		case 2:
			vars.action = ENCRYPT;
			break;
		case 3:
			vars.action = DECRYPT;
			break;
		default:
			vars.action = USAGE;
	}
	return vars;
}
