#include "main.ih"

void transformInput(int (*toCase)(int)) {
    char ch;
    while ((ch = cin.get()) != -1)
        cout << (char)toCase(ch);
}