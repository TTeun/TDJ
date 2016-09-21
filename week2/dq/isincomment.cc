void processCComments(string& inputLine, variables& var) {
	if (inputLine.find("/*") != string::npos) {
		var.currentState = C_COMMENT;
		++var.cComments;
		++var.docCounter;
		string tempLine;
		while (getline(cin, tempLine)) {
			var.docCounter += var.initialCComment ? 1 : 0;
			if (tempLine.find("*/") != string::npos) {
				var.currentState = LINE;
				break;
			}
		}
	}
	var.initialCComment = false;
	// If the first line is not a C-Style comment, there is no initial
    // C-style comment
}
