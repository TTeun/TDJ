#include "main.ih"

Vars arguments(int argc, char key)
{
	Vars vars;
	vars.key = key;
	vars.len = sizeof(key);
	switch(argc)
	{
		case 1:
			vars.action = ENCRYPT;
			break;
		case 2:
			vars.action = DECRYPT;
		break;
			default:
			vars.action = USAGE;
	}
	return vars;
}
