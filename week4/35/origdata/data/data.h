#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include <string>

class Data
{
    int d_value = 0;
//    std::string d_text;

    public:
        bool read();
        void display() const; 
};
        
#endif
