#include "search.ih"

std::string Search::allCasing(std::string str){
	int idx = 0;
	while (str[idx])
	{
		str[idx] = tolower(str[idx]);
		idx += 1;
	}
	return str;
}