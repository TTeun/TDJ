#include <iostream>

using namespace std;

class Demo
{
public:
    Demo() {
        cout << "Constructor called" << '\n';
    }
    ~Demo() {
        cout << "Destructor called" << '\n';
    }
    Demo(Demo const &other) {
        cout << "Copy constructor called" << '\n';
    }
    Demo(Demo &&other) {
        cout << "Move constructor called" << '\n';
    }
    Demo& operator=(Demo &arg) {
        cout << "Copy assignment called" << '\n';
    }
    Demo& operator=(Demo&& arg) {
        cout << "Move assignment called" << '\n';
    }
};

Demo factory() {
    Demo obj;
    Demo obj2;
    obj2 = obj;
    return obj;
}

int main() {
    Demo obj, obj2;
    obj2 = obj;
}