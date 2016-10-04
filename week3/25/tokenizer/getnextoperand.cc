#include "tokenizer.ih"

void Tokenizer::getNextOperand() {
	string str;
	cin >> str;
	d_operandType = str[0] == '@'   ? MEMORY :
	                islower(str[0]) ? REGISTER :
	                VALUE;

	if (d_operandType != VALUE)
		str.erase(0, 1);

	if (str.find_first_not_of("0123456789") == string::npos)
		d_operandType = SYNTAX;
	else
		d_value = stoi(str);

}