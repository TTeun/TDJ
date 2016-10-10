#include "strings.ih"

Strings::Strings(int argc, char ** argv)
{
    d_size = argc - 1;
    string *temp = static_cast<string *>(
                       operator new(d_size * sizeof(string)));
    for (size_t idx = 0; idx != d_size; ++idx)
        new(temp + idx) string(argv[idx + 1]);

    d_str = temp;

}
