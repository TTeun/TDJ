#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>

using namespace std;

int main(int argc, char * argv[]){
  int storedValue = 0;
  int inputNumber;
  string input;
  char action;
  while (true){
    cout << "> ";
    cin >> input;
    action = input[2];
    if (action == 't')
      exit(0);

    cin >> input;
    inputNumber = stoi(input);

    switch (action) {
      case 'o':
        storedValue = inputNumber;
        break;
      case 'd':
        storedValue += inputNumber;
        break;
      case 'b':
        storedValue -= inputNumber;
        break;
      case 'l':
        storedValue *= inputNumber;
        break;
      case 'v':
        if (inputNumber != 0)
          storedValue /= inputNumber;
        else
          cout << "Division by zero " << '\n';
        break;
      default:
        cout << "erroneous input" << '\n';
        break;
    }
    cout << "x = " << storedValue << '\n';
  }




  return 0;
}
