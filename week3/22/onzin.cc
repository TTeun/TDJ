#include <iostream>

using namespace std;

class Demo {
  public:
   Demo() { }

   void run() &{ cout << "Called from object or from function expecting a reference to object" << '\n'; }
   void run() const& { cout << "Called from const object" << '\n'; }
   void run() && { cout << "Called from anonymous object" << '\n'; }
 };

int main(){
	const Demo obt;
	Demo obt2;
	obt2.run();
	obt.run();
	Demo().run();
}
