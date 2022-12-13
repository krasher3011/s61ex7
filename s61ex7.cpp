#include <iostream>
#include "Triad.h"
#include "Triangle.h"
using namespace std;
int main()
{
    Triangle a;
    a.setFirst();
    a.setSecond();
    a.setThird();
    a.Display();
    cout <<"\n" << a.Sum()<<"\n";
    a.PROVERKA();
    cout << "\n Area of triangle: " << a.PLOSHAD();
    cout << "\n<A = "<<a.arccosA();
    cout << "\n<B = " << a.arccosB();
    cout << "\n <C = " << a.arccosC();
    return 0;
}