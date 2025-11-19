#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

#include "HeaderFiles/MyLib.h"
#include "HeaderFiles/MyInputLib.h"
#include "HeaderFiles/StudentLib.h"
#include "HeaderFiles/MathLib.h"

using namespace MyInputLib;
int ReadNumber()
{
    int number;
    cout << "Enter a number" << endl;
    cin >> number;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        cout << "Invalid Number , Enter a Valid One " << endl;

        cin >> number;
    }
    return number;
}
int main()
{
    cout << (12 & 25) << endl;
    cout << (12 | 25) << endl;
}
