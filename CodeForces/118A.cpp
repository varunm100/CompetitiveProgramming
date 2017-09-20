#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	string InputString;
	cin >> InputString;
	transform(InputString.begin(), InputString.end(), InputString.begin(), ::tolower);
	string NewString;
	char TempChar;
	for (int i = 0; i < InputString.length(); i++) {
		TempChar = InputString[i];
		if (TempChar != 'a' && TempChar != 'e' && TempChar != 'i' && TempChar != 'o' && TempChar != 'u' && TempChar != 'y') {
			NewString+='.';
			NewString+=TempChar;
		}
	}
	cout << NewString << endl;
	return 0; 
}