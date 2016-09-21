#include "main.h"

Vars arguments(ifstream file, int argc, char* key)
{
  Vars vars;
  vars.file = file;
  vars.key = key;
  vars.len = sizeof(key);
  switch(argc) 
  {
  case 1:
    vars.action = ENCRYPT;
    break;
  case 2:
    vars.action = DECRYPT;
    break;  
  default:
    vars.action = USAGE;
  }
  return vars;
}
