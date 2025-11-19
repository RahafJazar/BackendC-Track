#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

#include "HeaderFiles/MyLib.h"
#include "HeaderFiles/MyInputLib.h"
#include "HeaderFiles/StudentLib.h"
#include "HeaderFiles/MathLib.h"

using namespace MyInputLib;

int main()
{
    srand((unsigned)time(NULL));

    // MyLib::Test();
    // int res = MyLib ::Sum2Numbers(3, 4);
    // cout << "\nSum of 3 and 4 is " << res;

    // int number = ReadNumber();
    // cout << "\nThe Input user entered is " << number;

    cout << "=====Student Management Program =====\n";

    StudentLib::stStudent st1;
    StudentLib::stStudent st2;

    // read Student info

    st1 = StudentLib::ReadStudent();
    st2 = StudentLib::ReadStudent();

    // Print Student  Info

    cout << "\nStudent1 Info\n";
    StudentLib::PrintStudent(st1);
    cout << "------------------------------------------\n";
    cout << "\nStudent2 Info\n";
    StudentLib::PrintStudent(st2);

    cout << "\n----------------------------------\n";
    cout << "\nBest Student : \n";
    StudentLib::PrintStudent(StudentLib::BestStudent(st1, st2));

    cout << "\n------------calculations-------------------------\n";
    int a = MyInputLib::ReadNumber("Enter Number1");
    int b = MyInputLib::ReadNumber("Enter Number2");

    cout << "Sum of " << a << " and " << b << " is " << MathLib::Sum2Numbers(a, b) << endl;
    cout << "Max is " << MathLib::MaxOfTwo(a, b) << endl;
    cout << "Min is " << MathLib::MinOfTwo(a, b) << endl;
    cout << "square of " << a << " is  : " << MathLib::Square(a);
    cout << "square of " << b << " is  : " << MathLib::Square(b);
}
