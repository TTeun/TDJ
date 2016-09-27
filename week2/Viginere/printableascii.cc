#include "main.ih"

char printableAscii(char ch)
{
	char processed = ch;
	if (ch < 9)
        processed = static_cast<char>(ch + 119);
    if (ch > 127)
        processed = static_cast<char>(ch - 119);
    return processed;
} 
