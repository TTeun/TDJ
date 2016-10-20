#include "search.ih"

Search::Search(int argc, char **argv)
{

    d_match = &Search::match;
    d_findTarget = &Search::withoutBlanks;
    d_showNrs = &Search::showNrs;
    d_showLine = &Search::showLine;
    getOpt(argc, argv);
    // char *inputText = NULL;

    d_text = argv[argc - 1];
}
