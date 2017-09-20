#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <math.h>

using namespace std;

class point {
public:
	point(double _x, double _y) {
		this->x = _x;
		this->y = _y;
	}
	point() {}
	~point() {}
	double x;
	double y;
};
double GetDis(double x1, double y1, double x2, double y2) {
	double firstTerm = x2-x1;
	firstTerm = firstTerm*firstTerm;
	double secondTerm = y2-y1;
	secondTerm = secondTerm*secondTerm;
	double UnderRoot = firstTerm + secondTerm;
	double FinalDis = sqrt(UnderRoot);
	return FinalDis;
}
double GetDisPoint(point &PointOne, point &PointTwo) {
	double x1 = PointOne.x;
	double y1 = PointOne.y;
	double x2 = PointTwo.x;
	double y2 = PointTwo.y;
	double firstTerm = x2-x1;
	firstTerm = firstTerm*firstTerm;
	double secondTerm = y2-y1;
	secondTerm = secondTerm*secondTerm;
	double UnderRoot = firstTerm + secondTerm;
	double FinalDis = sqrt(UnderRoot);
	return FinalDis;
}
int main() {
	int N, K;
	cin >> N >> K;
	vector<point> AllPoints;
	vector<double> PointDis;
	point OriginPoint(0,0);
	double TempX;
	double TempY;
	for (int i = 0; i < N; ++i) {
		cin >> TempX;
		point TempPointX;
		TempPointX.x = TempX;
		AllPoints.push_back(TempPointX);
	}
	for (int i = 0; i < N; ++i) {
		cin >> TempY;
		AllPoints[i].y = TempY;
	}
	for (int i = 0; i < AllPoints.size(); i++) {
		PointDis.push_back(GetDisPoint(OriginPoint, AllPoints[i]));
	}
	sort (PointDis.begin(), PointDis.end());
	double FinalAnswer = PointDis[(K-1)];
	FinalAnswer = ceil(FinalAnswer);
	cout << FinalAnswer << endl;
	return 0;
}