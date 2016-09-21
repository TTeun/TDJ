int findPercentage(int docCounter, int lineCounter) {
	int value = 200 * (docCounter / static_cast<float>(lineCounter));
	return value > 100 ? 100 : value;
}

void showResults(variables& var) {
	cout << "Total line Weight: " << var.lineCounter << '\n';
	cout << "Number of eoln comments: " << var.eolnComments << '\n';
	cout << "Number of C-style comments: " << var.cComments << '\n';
	cout << "Maximum nesting depth: " << var.maxNest << '\n';
	cout << "Documentation quality: " << findPercentage(var.docCounter, var.lineCounter) << "%\n";
}