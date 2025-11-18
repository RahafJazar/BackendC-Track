#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

#include "HeaderFiles/MyLib.h"
#include "HeaderFiles/MyInputLib.h"

using namespace MyInputLib;
int main()
{
    srand((unsigned)time(NULL));

    MyLib::Test();
    int res = MyLib ::Sum2Numbers(3, 4);
    cout << "\nSum of 3 and 4 is " << res;

    int number = ReadNumber();
    cout << "\nThe Input user entered is " << number;
}
