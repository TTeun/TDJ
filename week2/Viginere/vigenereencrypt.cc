#include "main.ih"

void vigenereEncrypt(Vars vars)
{
	cout << "The encrypted text is:\n";
	int number = 0;
	char ch;
	while ((ch = cin.get()) != -1)
	{
		cout << static_cast<char>(printableAscii(ch + vars.key[number % vars.len]));
		++number;
	}
	cout << "\n";
}
