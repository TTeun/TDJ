#include <iostream>
#include <ctime>

using namespace std;

ostream &now(ostream &stream) {
    time_t result = time(NULL);
    string strt(asctime(localtime(&result)));
    strt.erase(strt.size() - 1);
    return stream << strt;
}

int main()
{
    cout << now << " and I am excited for the weekend" << '\n';
}