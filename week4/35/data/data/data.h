#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include "dataimpl/dataimpl.h"

class Data
{
    DataImpl * pimpl; // Only internal variable

public:
    Data();
    ~Data();
    bool read();
    void display() const;
};

#endif
