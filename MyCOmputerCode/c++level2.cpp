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

// time management
#include <chrono>

struct stStudent
{
    string Name;
    int Age;
    string Major;
};
using namespace MyInputLib;
void SaveAddressinPointerStack(int number);
void SaveAddressinPointerHeap(int number);
void PointerWithStructStack(stStudent st);
void PointerWithArray(int arr[], int size);
void UpdateByReference(int &num);
void UpdateLocal(int num);
void DateAndTime();
int main()
{
    // vector<MyLib::stEmployee> vEmployees;
    // MyLib::ReadEmployeesVector(vEmployees);
    // MyLib::PrintEmployeesVector(vEmployees);

    // cout << setw(10) << "First element of victor : " << endl;
    // vEmployees.front();
    // cout << setw(10) << "Last element of victor : " << endl;
    // vEmployees.back();

    // vEmployees.pop_back();
    // cout << setw(40) << "VEmplyees after pop_pack() function is applied " << endl;
    // MyLib::PrintEmployeesVector(vEmployees);
    auto start = std::chrono::high_resolution_clock::now();
    int x = 5;
    int y = 10;
    int sum = x + y;
    cout << sum << endl;
    SaveAddressinPointerStack(10);
    SaveAddressinPointerHeap(10);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    cout << "Execution time is : " << duration.count() << " seconds " << endl;

    stStudent student1;
    student1.Age = 34;
    student1.Major = "Cs";
    student1.Name = "Ahmad";
    PointerWithStructStack(student1);

    int arr[4] = {45, 345, 4, 2};
    PointerWithArray(arr, 4);

    int x1 = 5, y1 = 5;
    UpdateByReference(x1);
    UpdateLocal(y1);
    cout << "x1 after updating by reference  : " << x1 << endl;
    cout << "y1 after updating by local : " << y1 << endl;

    DateAndTime();
}
void SaveAddressinPointerStack(int number) // pointer and value in the stack
{
    int *p = &number;
    cout << "address of " << number << "=" << p << endl;
    cout << "value of p :  " << "=" << *p << endl;
    *p = 30; // dereferencing
    cout << "address  in p : " << p << endl;
    cout << "value of p: " << *p << endl;
    cout << "value of number is : " << number << endl;
}
void SaveAddressinPointerHeap(int number) // pointer and value in the stack
{
    int *p = new int(6); // new => heap , you must to clean the memory after usage to prevent memory leak happen
    cout << "address of p " << p << endl;
    cout << "value of p :  " << *p << endl;
    *p = 30; // dereferencing
    cout << "address  in p : " << p << endl;
    cout << "value of p: " << *p << endl;
    delete p;    // free heap memory
    p = nullptr; // safety
}

void PointerWithStructStack(stStudent s)
{
    stStudent *ps = &s;
    cout << "Age: " << ps->Age << endl;
    cout << "Major: " << ps->Major << endl;
    cout << "Name: " << ps->Name << endl;
    cout << "Address in p is : " << ps << endl;
}

void PointerWithArray(int arr2[], int size)
{
    int *p = arr2;
    for (int i = 0; i < size; i++)
    {
        cout << "p[" << i << "] = " << *(p + i) << endl;
    }
}

void UpdateByReference(int &num)
{
    num = 61;
}
void UpdateLocal(int num)
{
    num = 61;
}

void DateAndTime()
{
    time_t now = time(0); // num of seconds since 1970
    cout << ctime(&now);
    tm *t = localtime(&now);
    cout << "Hour is : " << t->tm_hour << endl;
    cout << "Minutes are: " << t->tm_min << endl;
    cout << "Seconds are: " << t->tm_sec << endl;
    cout << "Year is :" << t->tm_year + 1900 << endl;
    cout << "Month is : " << t->tm_mon << endl;
    cout << "day in month : " << t->tm_mday << endl;
    cout << "Week day : " << t->tm_wday << endl;
}