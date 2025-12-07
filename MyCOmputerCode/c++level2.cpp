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

    cout << setw(10) << "First element of victor : " << endl;
    vEmployees.front();
    cout << setw(10) << "Last element of victor : " << endl;
    vEmployees.back();

    vEmployees.pop_back();
    cout << setw(40) << "VEmplyees after pop_pack() function is applied " << endl;
    MyLib::PrintEmployeesVector(vEmployees);
}
