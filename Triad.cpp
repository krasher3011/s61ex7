#include "Triad.h"
using namespace std;

void Triad:: setFirst() {
	int n;
	cout << "Enter number first: ";
	cin >> n;
	first = n;
}

void Triad:: setSecond() {
	int n;
	cout << "Enter number second: ";
	cin >> n;
	second = n;
}

void Triad::setThird() {
	int n;
	cout << "Enter number third: ";
	cin >> n;
	third = n;
}

void Triad:: Display() {
	cout << "\nFirst: " << first <<
		"\nSecond: " << second <<
		"\nThird: " << third;
}

int Triad::Sum() {
	return first + second + third;
}