#include <string>

string versionStr = "Version 1.0.0";
string helpStr = "options.cc V 1.0.0\n\n"
                 "Usage: ./a.out [options] < file\n"
                 "Where:\n"
                 "--captitalize (--uc, -u): captitalize the letters in 'file'\n"
                 "--help (-h):              show this usage info\n"
                 "--lower-case (--lc, -l):  all letters in 'file' changed to "
                 "lower case\n"
                 "--version (-v):           display version information\n\n"

                 "options processes 'file' and writes the results to the standard"
                 "output stream.";