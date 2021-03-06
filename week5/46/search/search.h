#ifndef INCLUDED_SEARCH_
#define INCLUDED_SEARCH_

#include <iostream>
#include <string>
#include <sstream>

enum State {
    VALID,
    INVALID1,
    INVALID2
};

class Search
{
    std::string d_text;
    std::string (Search::*d_match)(std::string);
    void (Search::*d_findTarget)(std::string, size_t);
    void (Search::*d_showNrs)(size_t);
    void (Search::*d_showLine)(std::string);

public:
    Search(int argc, char **argv);
    void run();

private:
    void arguments(int argc, char **argv);
    std::string match(std::string);
    std::string allCasing(std::string);
    void withBlanks(std::string, size_t);
    void withoutBlanks(std::string, size_t);
    void showNrs(size_t);
    void showLine(std::string);
    void noOp(std::string);
    void noOp(size_t);
    void getOpt(int argc, char ** argv);
};

#endif

