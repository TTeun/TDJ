#include "search.ih"

void Search::withoutBlanks(std::string line, size_t lineCounter){
	if ((this->*d_match)(line).find(d_text) != string::npos) { 
			(this->*d_showNrs)(lineCounter);
            (this->*d_showLine)(line);
			cout << "\n";
        }
}
