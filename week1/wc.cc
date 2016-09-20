#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char * argv[]){
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
    }

    char ch;
    switch (mode) {
        case ERROR:
        {
            cout << "Wrong input " << '\n';
            return -1;
        }
        case BYTES:
        {
            int numBytes = 0;
            while (cin.get(ch))
                ++numBytes;
            cout << numBytes << '\n';
            break;
        }
        case LINES:
        {
            int numLines = 0;
            string line;
            while (getline(cin, line))
                ++numLines;
            cout << numLines << '\n';
            break;
        }
        case WORDS:
        {
            int numWords = 0;
            enum {word, space};
            int state = space;
            while (cin.get(ch)){
                numWords += state == space && not isspace(ch);
                state = isspace(ch) ? space : word;
            }
            cout << numWords << '\n';
            break;
        }
    }

    return 0;
}
