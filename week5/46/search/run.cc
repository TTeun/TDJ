#include "search.ih"

void Search::run()
{
    size_t lineCounter = 1;
    std::string line;
    d_text = (this->*d_match)(d_text);

    while (getline(cin, line))
    {
        (this->*d_findTarget)(line, lineCounter);
        lineCounter += 1;
    }
}
