#include "main.ih"

void process(Vars vars)
{
  if (vars.action == USAGE)
    cerr << "Please use only 1 (for encrypting) or 2 (for decrypting) command line arguments.\n";
  if (vars.action == ENCRYPT)
	  vigenereEncrypt(vars);
  if (vars.action == DECRYPT)
	  vigenereDecrypt(vars);
}
