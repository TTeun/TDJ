void transformInput(int (*toCase)(int)) {
	string line;
	while (getline(cin, line)) {
		transform(line.begin(), line.end(), line.begin(), toCase);
		cout << line << '\n';
	}
}