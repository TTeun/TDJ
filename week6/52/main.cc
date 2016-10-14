#include <iostream>
#include <ctime>

using namespace std;

ostream &now(ostream &stream) {
    time_t result = time(NULL);
    string strt(asctime(localtime(&result)));
    return stream << strt.substr(0, strt.size() - 1);
}

int main()
{
    cout << now << '\n';
}