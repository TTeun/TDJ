#include "main.h"

char* vigenere(Vars vars)
{
  int letters;
  char* text;
  for (number = 0; number != vars.file.length(); number++)
  {
    if (vars.action == ENCRYPT)
      text[number] = (vars.file[number] + vars.key[number % vars.len]) % 256;
    if (vars.action == DECRYPT)
      text[number] = (vars.file[number] - vars.key[number % vars.len]);
      if (text[number] < 0)
        text[number] = text[number] + 256;
  }
}
