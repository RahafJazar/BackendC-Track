#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <iomanip> //this library stored std::setw
#include <vector>
#include "HeaderFiles/MyLib.h"
#include "HeaderFiles/MyInputLib.h"
#include "HeaderFiles/StudentLib.h"
#include "HeaderFiles/MathLib.h"

using namespace MyInputLib;

int main()
{
    vector<MyLib::stEmployee> vEmployees;
    MyLib::ReadEmployeesVector(vEmployees);
    MyLib::PrintEmployeesVector(vEmployees);
}
