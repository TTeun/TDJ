#include "main.h"

int main(int argc, char **argv)
{
  Vars vars;
  vars = arguments(cin, argc, argv[1]);
  if (vars.action == USAGE)
  {
    cerr << "Please use only 1 (for encrypting) or 2 (for decrypting) command line arguments.\n";
    exit(0);
  }
  char* text;
  text = vigenere(vars);
}
