void processLine(string& inputLine, variables& var) {
	processCComments(inputLine, var);  // process C-style comments starting this line
	setWeights(inputLine, var);        // Adjust the nesting and line weights
	checkEOLNComments(inputLine, var); // update line and eoln counter
}