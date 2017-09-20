#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	string MainString;
	int Sum = 0;
	cin >> MainString;
	for (int i = 0; i < MainString.length(); i++) {
		char SingleChar = MainString[i];
		if (SingleChar == '1') {
			Sum+=2;
		} else if (SingleChar == '2') {
			Sum+=5;
		} else if (SingleChar == '3') {
			Sum+=5;
		} else if (SingleChar == '4') {
			Sum+=4;
		} else if (SingleChar == '5') {
			Sum+=5;
		} else if (SingleChar == '6') {
			Sum+=6;
		} else if (SingleChar == '7') {
			Sum+=3;
		} else if (SingleChar == '8') {
			Sum+=7;
		} else if (SingleChar == '9') {
			Sum+=6;
		} else if (SingleChar == '0') {
			Sum+=6;
		}
	}
	cout << Sum << endl;
	return  0;
}