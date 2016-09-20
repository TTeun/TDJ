#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char * argv[]) {
    enum Mode { ERROR, BYTES, LINES, WORDS };
    int mode;
    switch (argv[1][0]) {
    case 'b':
        mode = BYTES;
        break;
    case 'l':
        mode = LINES;
        break;
    case 'w':
        mode = WORDS;
        break;
    default :
        mode = ERROR;
        cout << "Wrong input " << '\n';
        return -1;
    }

    size_t ctr = 0;
    char ch;
    if (mode != WORDS) {
        while (cin.get(ch)) {
            ctr += mode == BYTES ? 1 : (ch == '\n');
        }
    } else {
        enum State {
            word,
            space
        };
        State internalState = space;
        while (cin.get(ch)) {
            ctr += internalState == space && not isspace(ch);
            internalState = isspace(ch) ? space : word;
        }
    }
    cout << ctr << '\n';

    return 0;
}
