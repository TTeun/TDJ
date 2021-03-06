#include "strings/strings.h"
#include <iostream>

using namespace std;

extern char **environ;

ostream &operator<<(ostream &ostr, Strings::Proxy obj) {
  ostr << obj.str();
  return ostr;
}

int main(int argc, char **argv) {
  Strings args(argc, argv);
  Strings env(environ);

  cout << args[0] << '\n';

  args[1] = args[2] = args[0];

  cout << args[1] << '\n';
}
