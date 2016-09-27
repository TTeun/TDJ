#include "main.ih"
#include "strings.h"

int processOptions(Mode mode) {
    switch (mode)
    {
    case ERROR:
        cout << "Wrong input" << '\n';
        return -1;
    case NONE:
        return 0;
    case VERSION:
        cout << versionStr << '\n';
        return 0;
    case HELP:
        cout << helpStr << '\n';
        return 0;
    default:
        if (isatty(STDIN_FILENO)) {
            cout << "No file redirection was used!" << '\n';
            return -1;
        }

        transformInput(mode == LOWER ? ::tolower : ::toupper);
        return 0;
    }
}