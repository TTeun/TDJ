#ifndef __INCLUDED__STRINGS__
#define __INCLUDED__STRINGS__

#include <string>

class Strings
{
    size_t d_size;
    std::string * d_str;

public:
    Strings(int argc, char ** argv);
    Strings(char **environ);
    std::string const &at(size_t idx) const;
    std::string &at(size_t idx);
    void append(char * ntbs);
    void append(std::string &str);
    size_t size() const;

private:
    size_t envSize(char ** environ);
    void getInput(char **inp);
    void cpyBeforeAdd();
};

#endif
