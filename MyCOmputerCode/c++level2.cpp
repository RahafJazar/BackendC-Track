#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <iomanip> //this library stored std::setw

#include "HeaderFiles/MyLib.h"
#include "HeaderFiles/MyInputLib.h"
#include "HeaderFiles/StudentLib.h"
#include "HeaderFiles/MathLib.h"

using namespace MyInputLib;

int main()
{
    int x[10][10];
    cout << setw(4) << " " << "|";
    for (int i = 1; i <= 10; i++)
        cout << setw(3) << i;
    cout << endl;
    cout << setw(12) << "_______________________________________________" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << setw(4) << i + 1 << "|";
        for (int j = 0; j < 10; j++)
        {
            x[i][j] = (i + 1) * (j + 1);
            printf(" %02d ", x[i][j]);
        }
        cout << endl;
    }
}
