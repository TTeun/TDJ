#include "search.ih"

void Search::getOpt(int argc, char ** argv) {
    State state = VALID;
    int option;
    while ((option = getopt(argc, argv, "iwnl")) != -1) {
        switch (option)
        {
        case 'i':
            d_match = &Search::allCasing;
            break;

        case 'w':
            d_findTarget = &Search::withBlanks;
            break;

        case 'n':
            if (state == INVALID2) {
                cerr << "Conflicting options \n";
                exit(0);
            }
            d_showLine = &Search::noOp;
            state = INVALID1;
            break;

        case 'l':
            if (state == INVALID1) {
                cerr << "Conflicting options \n";
                exit(0);
            }
            d_showNrs = &Search::noOp;
            state = INVALID2;
            break;
        }
    }
}