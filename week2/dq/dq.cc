#include <iostream>
#include <cstdlib>
#include "data.h"
#include "checkeolncomments.cc"
#include "isincomment.cc"
#include "setweights.cc"
#include "processline.cc"
#include "showresults.cc"

int main() {
	variables var;

	// Initialization of the variables struct that holds 
	// all important data
	var.lineWeight = 1;
	var.lineCounter = 0;
	var.nestDepth = 0;
	var.nestWeight = 1;
	var.maxNest = 0;
	var.docCounter = 0;
	var.cComments = 0;
	var.initialCComment = true;
	var.currentState = LINE;

	string inputLine = ""; // string used to gather input
	while (getline(cin, inputLine))
		processLine(inputLine, var); // process each line

	showResults(var); // show final results
}