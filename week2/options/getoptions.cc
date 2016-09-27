#include "main.ih"

Mode getOptions(int argc, char **argv) {

    struct option longOpts[] =
    {
        {"help", 0, 0, 'h'},
        {"version", 0, 0, 'v'},
        {"capitalize", 0, 0, 'c'},
        {"uc", 0, 0, 'c'},
        {"lower-case", 0, 0, 'l'},
        {"lc", 0, 0, 'l'},
        {0, 0, 0, 0}
    };

    Mode mode = NONE;
    int ch;

    while ((ch = getopt_long (argc, argv, "hvcl", longOpts, 0)) != -1) {
        switch (ch) {
        case 'h':
            return HELP;
        case 'v':
            return VERSION;
        case 'c':
            if (mode == LOWER)
                return ERROR;
            mode = CAPITALIZE;
            break;
        case 'l':
            if (mode == CAPITALIZE)
                return ERROR;
            mode = LOWER;
            break;
        default:
            return ERROR;
        }
    }
    return mode;
}
