#include <iostream>
#include <string>
using namespace std;

class ValueOf {
public:
  ValueOf(size_t &value) {
    string var;
    cin >> var;
    bool hasK = false;
    size_t result = 0;
    for (char &ch : var)
      if (ch == 'k')
        hasK = true;
      else {
        result *= 10;
        result += ch - '0'; // sends '0' -> 0 etc...
      }
    value = hasK ? 100 * result : result;
  }
};

inline istream &operator>>(istream &is, ValueOf object) {
  return is;
}

int main() {
  size_t value;
  cin >> ValueOf(value);

  cout << value;
}
