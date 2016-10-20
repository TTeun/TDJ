using namespace std;

bool isCorrectQuery(ofstream &oStrm, ifstream &iStrm, Mode mode);
State humanToBin(ofstream &oStrm, ifstream &iStrm);
State binToHuman(ofstream &oStrm, ifstream &iStrm);
char charToBin(char ch);
char binToChar(int bits);
bool correctInput(char ch);