#include "strings/strings.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  Strings object(argc, argv);
  for (size_t idx = 1; idx != object.size(); ++idx)
    cout << object.at(idx) << ' ';
  cout << '\n';
}
