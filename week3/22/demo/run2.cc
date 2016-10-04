#include "demo.ih"

void Demo::run() const& {
	cout << "Called from const object" << '\n';
}
