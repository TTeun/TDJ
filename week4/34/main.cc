#include <iostream>
#include <string>

using namespace std;

void swap(string &num1, string &num2) {

}


int main() {

    string a = "een";
    string b = "twee";
    swap(&a, &b);

    cout << a << b << '\n';

    swap(a, b);
}