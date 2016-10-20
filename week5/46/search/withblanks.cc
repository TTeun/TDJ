#include "search.ih"

void Search::withBlanks(std::string line, size_t lineCounter) {
    std::istringstream iss(line);
    string word;
    while (iss >> word) {
        if ((this->*d_match)(word) == d_text)
        {
            (this->*d_showNrs)(lineCounter);
            (this->*d_showLine)(line);
            cout << "\n";
            break;
        }
    }

}
