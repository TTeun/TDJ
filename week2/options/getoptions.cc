enum Mode {
    help,
    version,
    capitalize,
    lower,
    error,
    none,
};

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

    Mode mode = none;
    int c;

    while ((c = getopt_long (argc, argv, "hvcl", longOpts, 0)) != -1) {
        switch (c) {
        case 'h':
            return help;
        case 'v':
            return version;
        case 'c':
            if (mode == lower)
                return error;
            mode = capitalize;
            break;
        case 'l':
            if (mode == capitalize)
                return error;
            mode = lower;
            break;
        default:
            return error;
        }
    }
    return mode;
}
