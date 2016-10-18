#include "main.ih"

extern char **environ;

int main(int argc, char **argv)
{
    Strings args(argc, argv);
    Strings env(environ);

}
