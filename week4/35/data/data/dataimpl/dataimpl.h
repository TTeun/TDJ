#ifndef INCLUDED_DATAIMPL_
#define INCLUDED_DATAIMPL_

#include <string>

class DataImpl {
    int d_value = 0;
    // std::string d_text;

public:
    bool read();
    void display() const;

};

#endif