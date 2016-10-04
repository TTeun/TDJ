#include <iostream>
#include "demo/demo.h"

using namespace std;

int main() {
	const Demo obt;
	Demo obt2;
	obt2.run();
	obt.run();
	Demo().run();
}
