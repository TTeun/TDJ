#include <iostream>
#include <cstdlib>

void func(std::ostream & out){
    out << "AA";
}

int main() {
    func(std::cout);
    return 0;
}