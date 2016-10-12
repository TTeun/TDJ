#ifndef __INCLUDED__STRINGS__
#define __INCLUDED__STRINGS__

#include <string>

class Strings
{
private:
    size_t d_size;
    std::string * d_str;

public:
    Strings(int argc, char ** argv);
    Strings(char **environ);
	~strings();
    std::string const &at(size_t idx) const;
    std::string &at(size_t idx);
    void append(char * ntbs);
    size_t size() const;

private:
    size_t envSize(char ** environ);
};

#endif
