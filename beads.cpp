/*
ID: varunm11
PROG: beads
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
	ofstream fout ("beads.out");
	ifstream fin ("beads.in");
	int N;
	fin >> N;
	string beads;
	fin >> beads;

	if(beads.length() != N){
		N = beads.length();
	}

	int CurrentMax = 0, max = 0;
	char color;
	bool switched;

	for(int i = 0; i < N; ++i){
		CurrentMax = 0;
		switched = false;
		color = 'w';
		for(int j = 0; j < N; ++j){
			const char CurrentMax_c = beads[(i + j) % N];
			if(CurrentMax_c != 'w'){
				if(color == 'w'){
				 color = CurrentMax_c;
				}
				else if(color != CurrentMax_c){
					if(switched) {
						break;
					} else {
						color = CurrentMax_c;
						switched = true;
					}
				}
			}
			++CurrentMax;
		}
		if(CurrentMax > max){
		max = CurrentMax;
		}
	}

	fout << max << endl;
	return 0;   
	}