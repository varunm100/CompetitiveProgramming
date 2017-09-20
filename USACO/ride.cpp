/*
ID: varunm11
PROG: ride
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int GetAlphaBetNum(char);

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string a, b;
    unsigned long long int ProductA = 1;
    unsigned long long int ProductB = 1;
    fin >> a >> b;
    for (int i = 0; i < a.length();i++) {
    	ProductA = ProductA * GetAlphaBetNum(a[i]);
    }
    for (int i = 0; i < b.length();i++) {
    	ProductB = ProductB * GetAlphaBetNum(b[i]);
    }
    ProductA = ProductA % 47;
    ProductB = ProductB % 47;
    if (ProductA == ProductB) {
    	fout << "GO" << endl;
    } else {
    	fout << "STAY" << endl;
    }
    return 0;
}

int GetAlphaBetNum(char AlphaBet) {
	switch (AlphaBet) {
		case 'A':
			return 1;
		case 'B':
			return 2;
		case 'C':
			return 3;
		case 'D':
			return 4;
		case 'E':
			return 5;
		case 'F':
			return 6;
		case 'G':
			return 7;
		case 'H':
			return 8;
		case 'I':
			return 9;
		case 'J':
			return 10;
		case 'K':
			return 11;
		case 'L':
			return 12;
		case 'M':
			return 13;
		case 'N':
			return 14;
		case 'O':
			return 15;
		case 'P':
			return 16;
		case 'Q':
			return 17;
		case 'R':
			return 18;
		case 'S':
			return 19;
		case 'T':
			return 20;
		case 'U':
			return 21;
		case 'V':
			return 22;
		case 'W':
			return 23;
		case 'X':
			return 24;
		case 'Y':
			return 25;
		case 'Z':
			return 26;
		default:
			return 0;
	}
}