#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

#include "HeaderFiles/MyLib.h"
#include "HeaderFiles/MyInputLib.h"
#include "HeaderFiles/StudentLib.h"
#include "HeaderFiles/MathLib.h"

using namespace MyInputLib;

int MySum(int a, int b)
{
    return a + b;
}
int MySum(double a, double b)
{
    return a + b;
}
int MySum(int a, int b, int c)
{
    return a + b + c;
}
int MySum(double a, double b, double c)
{
    return a + b + c;
}
int main()
{
    cout << MySum(3, 4) << endl;
    cout << MySum(3, 2, 4) << endl;
    cout << MySum(3.0, 4.0) << endl;
    cout << MySum(3.0, 2.0, 4.0) << endl;
}
