void setWeights(string& inputLine, variables& var) {

	var.nestDepth += inputLine.find("{") == string::npos ? 0 : 1;
	// Are we nesting deeper this line ?
	var.nestDepth -= inputLine.find("}") == string::npos ? 0 : 1;
	// Are we nesting less deep this line ?

	var.maxNest = var.maxNest > var.nestDepth ? var.maxNest : var.nestDepth;
	var.nestWeight = var.nestDepth > 2 ? 2 : 1;

	var.lineWeight = var.lineCounter > 30 ? 2 : 1;
}