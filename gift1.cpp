/*
ID: varunm11
PROG: gift1
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

ptrdiff_t GetFromIndex(string); 

vector<string> PeopleNames;
vector<int> PeopleVals;

int main() {
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    int NumPeople = 0;
    fin >> NumPeople;
    for (int i = 0; i < NumPeople;i++) {
    	string CurrentName;
    	fin >> CurrentName;
    	PeopleNames.push_back(CurrentName);
        PeopleVals.push_back(0);
    }
    int Amount = 0;
    int currentIndex = 0;
    int PeoplePerGift = 0;
    while (true){
        string Giver;
        Amount = 0;
        PeoplePerGift = 0;
        fin >> Giver;
        fin >> Amount >> PeoplePerGift;
        if (Amount != 0 || PeoplePerGift != 0) {
            int AmountPerPerson = Amount/PeoplePerGift;
            int Extra = Amount % PeoplePerGift;
            PeopleVals[GetFromIndex(Giver)] += Extra;
            PeopleVals[GetFromIndex(Giver)] -= Amount;
            for (int i = 0; i < PeoplePerGift; i++) {
                string CurrentPerson;
                fin >> CurrentPerson;
                PeopleVals[GetFromIndex(CurrentPerson)] += AmountPerPerson;
            }
        }
        if (currentIndex >= NumPeople) {
            break;
        }
        currentIndex++;
    }
    for (int x = 0; x < PeopleVals.size(); x++) {
        fout << PeopleNames[x] << " " << PeopleVals[x] << endl;
    }

    return 0;
}

ptrdiff_t GetFromIndex(string _CurrentNameSelection) {
    ptrdiff_t pos = distance(PeopleNames.begin(), find(PeopleNames.begin(), PeopleNames.end(), _CurrentNameSelection));
    return pos;
}