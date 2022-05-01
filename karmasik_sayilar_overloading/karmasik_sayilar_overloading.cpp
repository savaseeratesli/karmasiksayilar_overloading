#include <iostream>
#include "overloading.h"

using namespace std;

int main()
{
    complexNumber complex1;
    complexNumber complex2;

    cin >> complex1;
    cin >> complex2;

    cout << complex1;
    cout << complex2;
    
    complexNumber addComplex = complex1 + complex2;
    complexNumber subtractComplex = complex1 - complex2;
    complexNumber multiplyComplex = complex1 * complex2;
    complexNumber multiplyConstant = complex1 * 19;

    cout << addComplex << endl;
    cout << subtractComplex << endl;
    cout << multiplyComplex << endl;
    cout << multiplyComplex << endl;


    return 0;

}


