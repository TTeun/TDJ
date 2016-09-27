#include "main.ih"

void vigenereDecrypt(Vars vars)
{
	cout << "The decrypted text is:\n";
	int number = 0;
	char ch;
	while ((ch = cin.get()) != -1)
		cout << static_cast<char>(printableAscii(ch - vars.key[number % vars.len]));
}
