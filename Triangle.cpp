#include "Triangle.h"
#include <cmath>
using namespace std;
#define PI 3.14 
void Triangle::PROVERKA() {
	if (first > second + third || second > first + third || third > second + first) {
		while (first > second + third || second > first + third || third > second + first)
		{	
			cout << "Triangls has not exist. Please enter new numbers!";
			Triad::setFirst();
			Triad::setSecond();
			Triad::setThird();
		}
	}
}

float Triangle::PLOSHAD() {
	int perimetr;
	perimetr = (first + second + third)/2;
	return sqrt(perimetr * (perimetr - first) * (perimetr - second) * (perimetr - third));
}

double Triangle::arccosA() {
	double cos;
	cos = (double(first) * double(first) + double(second) * double(second) - double(third) * double(third)) / (2 * double(first) * double(second));
	return acos(cos)*180/PI;
}

double Triangle::arccosB() {
	return acos((double(second) * double(second) + double(third) * double(third) - double(first) * double(first)) / (2 * double(second) * double(third)))*180/PI;
}

double Triangle::arccosC() {
	return acos((double(first) * double(first) + double(third) * double(third) - double(second) * double(second)) / (2 * double(first) * double(third)))*180/PI;
}