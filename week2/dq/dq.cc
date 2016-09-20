#include <iostream>
#include <cstdlib>

using namespace std;

enum State
{
	LINE,
	C_COMMENT
};

typedef struct variables
{
	int lineWeight;
	int lineCounter;
	int nestDepth;
	int nestWeight;
	int maxNest;
	int docCounter;
	int cComments;
	State currentState;
} variables;

void checkEOLNComments(string& inputLine, variables& var) {
	size_t commentPosition = inputLine.find("//");
	switch (commentPosition) {
	case string::npos: // no comments
		var.lineCounter += var.lineWeight * var.nestWeight;
		break;
	case 0: // whole line is a comment
		++var.docCounter;
		break;
	default: // commment somewhere in line
		var.lineCounter += var.lineWeight;
		++var.docCounter;
		break;
	}
}

bool isInCComment(string& inputLine, variables& var) {
	if (var.currentState == LINE) {
		if (inputLine.find("/*") != string::npos && var.currentState != C_COMMENT) {
			var.currentState = C_COMMENT;
			++var.cComments;
			return true;
		}
	}
	if (inputLine.find("*/") != string::npos) {
		var.currentState = LINE;
		return true;
	}
	return false;
}

void processLine(string& inputLine, variables& var) {
	if (isInCComment(inputLine, var))
		return;

	var.nestDepth -= inputLine.find("}") == string::npos ? 0 : 1;

	var.nestWeight = var.nestDepth > 2 ? 2 : 1;
	var.lineWeight = var.lineCounter > 30 ? 2 : 1;

	checkEOLNComments(inputLine, var);

	var.nestDepth += inputLine.find("{") == string::npos ? 0 : 1;
	var.maxNest = var.maxNest > var.nestDepth ? var.maxNest : var.nestDepth;
}

int main() {
	variables var = {1, 0, 0, 1, 0, 0, 0, LINE};
	string inputLine = "";
	while (getline(cin, inputLine)) {
		processLine(inputLine, var);
	}
	cout << "Number of lines: " << var.lineCounter << '\n';
	cout << "Number of eoln comments: " << var.docCounter << '\n';
	cout << "Number of C-style comments: " << var.cComments << '\n';
	cout << "Maximum nesting depth: " << var.maxNest << '\n';

}