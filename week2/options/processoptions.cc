#include "transforminput.cc"
#include "strings.h"

int processOptions(Mode mode) {
	if (mode == error) {
		cout << "Wrong input" << '\n';
		return -1;
	}

	if (mode == none)
		return 0;

	if (mode == version) {
		cout << versionStr << '\n';
		return 0;
	}

	if (mode == help) {
		cout << helpStr << '\n';
		return 0;
	}

	if (isatty(STDIN_FILENO)) {
		cout << "No file redirection was used!" << '\n';
		return -1;
	}

	transformInput(mode == lower ? ::tolower : ::toupper);
	return 0;
}

