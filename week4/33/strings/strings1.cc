#include "strings.ih"

Strings::Strings(int argc, char ** argv)
    : d_str(new(std::string)), startIndex(new size_t[argc])
{
    startIndex[0] = 0;
    d_size = argc - 1;

    if (d_size >= 1)
        for (size_t inpt = 1; inpt != d_size + 1; ++inpt) {
            d_str->append(string(argv[inpt]).append(" "));
            startIndex[inpt] = startIndex[inpt - 1] + ntbsSize(argv[inpt]);
        }

}
