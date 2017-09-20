#include <iostream>
#include <string>
#include <map>
#include <cstddef>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <cstring>
#include <unordered_map>

using namespace std;

void GetOutput(string IString) {
	for (int i = 0; i < IString.length(); ++i) {
		for (int k = i+1; k < IString.length(); ++k) {
			if (IString[i] == IString [k]) {
				cout << "yes" << endl;
				return;
			}
		}
	}
	cout << "no" << endl;
};

int main() {
	int NumTests;
	cin >> NumTests;

	string Temp;

	std::vector<string> Input;

	for (int i = 0; i < NumTests; i++) {
		cin >> Temp;
		Input.push_back(Temp);
	}

	for (string I : Input) {
		if (I.length() > 2) {
			GetOutput(I);
		} else {
			cout << "no" << endl;
		}
	}
    return 0;
}