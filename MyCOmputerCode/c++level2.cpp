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

struct stEmployee
{
    string FistName;
    string LastName;
    double Salary;
};

int main()
{
    vector<stEmployee> vEmplyees;
    stEmployee emp1;
    emp1.FistName = "Rahaf";
    emp1.LastName = "Jazar";
    emp1.Salary = 340;
    vEmplyees.push_back(emp1);

    stEmployee emp2;
    emp2.FistName = "Dana";
    emp2.LastName = "Kharoub";
    emp2.Salary = 500;
    vEmplyees.push_back(emp2);

    for (stEmployee &emp : vEmplyees)
    {
        cout << "FirstName : " << emp.FistName << " \n LastName : " << emp.LastName << " \n Salary : " << emp.Salary << "\n\n";
    }
}
