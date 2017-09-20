/*
ID: varunm11
PROG: milk2
LANG: C++
*/

#include <iostream>
#include <stdio.h>
#include <vector>
#include <utility>
#include <string>
#include <fstream>

using namespace std;

class EventIns
{
public:
	bool ValidEvent;
	int EventNum;
	int Start;
	int End;
	EventIns();
	EventIns(bool _Valid) {
		this->ValidEvent = _Valid;
	}
	EventIns(int _EventNum, int  _Start, int _End) {
		this->EventNum = _EventNum;
		this->Start = _Start;
		this->End = _End;
		this->ValidEvent = true;
	}
	~EventIns() {}
};
vector<int> TimeLine;
vector<EventIns> EventTimeLine;

int GetMaxMilkTime() {
	std::vector<int> AllConnectedTimes;
	int FinalMax = 0;
	return FinalMax;
}

int main() {
	ofstream fout ("milk2.out");
	ifstream fin ("milk2.in");
	for (int i = 0; i < 1000000; ++i) {
		TimeLine.push_back(i);
		EventTimeLine.push_back(*new EventIns(false));
	}
	int NumTests;
	fin >> NumTests;
	int Temp1;
	int Temp2;
	for (int i = 0; i < NumTests; ++i) {
		fin >> Temp1 >> Temp2;
		
	}
	return 0;
}
