#include <iostream>
#include <cstring>
using namespace std;

void gtoh(const string& x) {
	char y[x.length()];
	strcpy(y, x.c_str());

	for (int i = 0; i < x.length(); ++i) {
		switch (y[i]) {
			case 'g': y[i] = 'h'; break;
			case 'G': y[i] = 'H'; break;
		}
	}

	cout << y;
}

int main(int argc, char **argv) {
	if (!(argc > 1)) {
		string x;
		while (getline(cin, x)) {
			gtoh(x);
			cout << '\n';
		}
	} else {
		for (int i = 1; i < argc; ++i) {
			if (i > 1) cout << ' ';
			gtoh(string(argv[i]));
		}

		cout << '\n';
	}

	return 0;
}
