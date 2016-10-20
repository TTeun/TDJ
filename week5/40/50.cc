#include <iostream>
#include <string>

using namespace std;

void strcopy(char dst[], char const src[]) {
    size_t i = 0;
    while (dst[i] = src[i])
        i++;
}


int main() {
    char str1[] = "str1";
    char str2[] = "str2";

    strcopy(str1, str2);
    cout << str1 << endl;


}
