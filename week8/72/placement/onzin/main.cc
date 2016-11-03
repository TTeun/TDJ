#include "lines.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> input = {"aa", "bb", "cc", "dd"};
  Lines obj(input);

  string str = obj[1];
  cout << obj.at(1) << '\n';
  obj[1] = "asas";
  cout << str << '\n';
}
