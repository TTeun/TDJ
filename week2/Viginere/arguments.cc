#include "main.ih"

Vars arguments(int argc, char* key)
{
    Vars vars;
    vars.alphabetSize =  '~' - ' ' + '\n' - '\t' + 2;
    vars.keyIdx =  0;
    vars.key = std::string(key);
    vars.len = sizeof(key);
    switch (argc)
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
