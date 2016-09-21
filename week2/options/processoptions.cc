#include "transforminput.cc"
#include "strings.h"

int processOptions(Mode mode) {
    switch (mode)
    {
    case error:
        cout << "Wrong input" << '\n';
        return -1;
    case none:
        return 0;
    case version:
        cout << versionStr << '\n';
        return 0;
    case help:
        cout << helpStr << '\n';
        return 0;
    default:
        if (isatty(STDIN_FILENO)) {
            cout << "No file redirection was used!" << '\n';
            return -1;
        }

        transformInput(mode == lower ? ::tolower : ::toupper);
        return 0;
    }
}