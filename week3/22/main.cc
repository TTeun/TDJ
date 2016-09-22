#include <iostream>
#include "demo/demo.ih"

void caller1(demo &var) {
    var.run(var);
}

void caller2(demo const &var) {
    var.run(var);
}

demo getDemo() {
    return demo();
}

void caller3(demo & var) {
    var.run(getDemo());
}

int main() {
    demo thing;
    demo const thing2;
    caller1(thing);
    caller2(thing2);
    caller3(thing);
    return 0;
}