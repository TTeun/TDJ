#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char * argv[]){
  if (argc != 3){
    cout << "Wrong input, please enter a desired radix and number" << '\n';
    return 0;
  }

  size_t radix, num;
  stringstream radixStr(argv[1]);
  radixStr >> radix;

  stringstream numStr(argv[2]);
  numStr >> num;

  string output = "";
  char tempChar;
  while (num){
    tempChar = (num % radix);
    tempChar += tempChar > 9 ? ('a' - 10) : '0';
    output.insert(output.begin(), tempChar);
    num /= radix;
  }

  cout << output << endl;
  return 0;
}
