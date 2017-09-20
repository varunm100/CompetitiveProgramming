/*
ID: varunm11
PROG: transform
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
string reverseStr(string str){
    int n = str.length();
    string NewStr = str;
    for (int i=0; i<n/2; i++)
       swap(NewStr[i], NewStr[n-i-1]);
   	return NewStr;
}
vector<string> NineDeg(vector<string> InputString) {
	std::vector<string> NewVec;
	string TempString;
	for (int i = 0; i < InputString.size(); ++i) {
		TempString = "";
		for (int k = 0; k < InputString.size(); ++k) {
			TempString+=InputString[k][i];
		}
		NewVec.push_back(reverseStr(TempString));
	}
	return NewVec;
}
vector<string> OneEightDeg(vector<string> InputString) {
	reverse(InputString.begin(), InputString.end());
	std::vector<string> NewString;
	for (int i = 0; i < InputString.size(); ++i) {
		NewString.push_back(reverseStr(InputString[i]));
	}
	return NewString;
}
vector<string> TwoSeventy(vector<string> InputString) {
	reverse(InputString.begin(), InputString.end());
	std::vector<string> NewVec;
	string TempString;
	for (int i = 0; i < InputString.size(); ++i) {
		TempString = "";
		for (int k = 0; k < InputString.size(); ++k) {
			TempString+=InputString[k][i];
		}
		NewVec.push_back(reverseStr(TempString));
	}
	reverse(NewVec.begin(), NewVec.end());
	return NewVec;
}
vector<string> Reflect(std::vector<string> InputString) {
	std::vector<string> FinalVec;
	for (int i = 0; i < InputString.size(); ++i) {
		FinalVec.push_back(reverseStr(InputString[i]));
	}	
	return FinalVec;
}
vector<string> Combo(vector<string> InputStringVec, int Deg) {
	std::vector<string> FinalVec = Reflect(InputStringVec);
	if (Deg == 90) {
		FinalVec = NineDeg(FinalVec);
	} else if (Deg == 180) {
		FinalVec = OneEightDeg(FinalVec);
	} else if (Deg == 270) {
		FinalVec = TwoSeventy(FinalVec);
	}
	return FinalVec;
}
bool CheckEqual(std::vector<string> StringVec1, std::vector<string> StringVec2) {
	for (int i = 0; i < min(StringVec1.size(), StringVec2.size()); ++i) {
		if (StringVec1[i] != StringVec2[i]) {
			return false;
		}
	}
	return true;
}
int main() {
	ofstream fout ("transform.out");
	ifstream fin ("transform.in");
	string TempString;
	int S;
	fin >> S;
	vector<string> Before;
	vector<string> After;
	for (int i = 0; i < S; i++) {
		fin >> TempString;
		Before.push_back(TempString);
	}
	for (int i = 0; i < S; i++) {
		fin >> TempString;
		After.push_back(TempString);
	}
	if (CheckEqual(After, NineDeg(Before))) {
		fout << 1 << endl;
	} else if (CheckEqual(After, OneEightDeg(Before))) {
		fout << 2 << endl;
	} else if (CheckEqual(After, TwoSeventy(Before))) {
		fout << 3 << endl;
	} else if (CheckEqual(After, Reflect(Before))) {
		fout << 4 << endl;
	} else if (CheckEqual(After, Combo(Before, 90))) {
		fout << 5 << endl;
	} else if (CheckEqual(After, Combo(Before, 180))) {
		fout << 5 << endl;
	} else if (CheckEqual(After, Combo(Before, 270))) {
		fout << 5 << endl;
	} else if (CheckEqual(After, Before)) {
		fout << 6 << endl;
	} else {
		fout << 7 << endl;
	}
	return 0;
}