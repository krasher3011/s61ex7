#pragma once
#include <iostream>
using namespace std;
class Triad
{
protected:
	int first;
	int second;
	int third;
public:
	void setFirst();
	void setSecond();
	void setThird();
	void Display();
	int Sum();
};

