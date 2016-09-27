#include "main.ih"

int main(int argc, char* argv[])
{
	Vars vars;
	vars = arguments(argc, argv[1]);
	process(vars);
}
