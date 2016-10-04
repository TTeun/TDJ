#include <iostream>
#include "demo/demo.ih"

void caller1(demo &var) {
    var.run(var);
}

int main() {
    demo thing;
	const demo thing2;
	thing.run();
	thing2.run();
    return 0;
}
