using namespace std;

bool streamsOk(ofstream &oStrm, ifstream &iStrm, Mode mode);
State humanToBin(ofstream &oStrm, ifstream &iStrm);
State binToHuman(ofstream &oStrm, ifstream &iStrm);
char charToBin(char ch);
char binToChar(int bits);
bool correctInput(char ch);
size_t getBinarySize(ifstream &iStrm);
void setBinarySize(ofstream &oStrm, size_t size);
bool isBinFile(ifstream &iStrm);
void setBinaryHeader(ofstream &oStrm);
void convert(ofstream &oStrm, ifstream &iStrm, State (*converter)(ofstream&, ifstream&));
void usage();