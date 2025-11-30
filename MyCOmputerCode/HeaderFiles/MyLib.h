#pragma once
#include <iostream>
using namespace std;
namespace MyLib
{
    void Test()
    {
        cout << "Hi,this is my first function in my first library !";
    }

    int Sum2Numbers(int num1, int num2)
    {
        return num1 + num2;
    }

    void PrintNumbers(int N, int M)
    {
        if (N <= M)
        {
            cout << N << endl;
            PrintNumbers(N + 1, M);
        }
    }

    // Program to print numbers from M down to N
    void PrintNumbersFromMtoN(int N, int M)
    {
        if (M >= N)
        {
            cout << M << endl;
            PrintNumbersFromMtoN(N, M - 1);
        }
    }

    // Program to calculate power N^M
    int PrintNPowerM(int N, int M)
    {
        if (M == 0)
        {
            return 1;
        }

        return N * PrintNPowerM(N, M - 1);
    }

    void MyFuncToLearnStatic()
    {
        static int number = 1;
        cout << "Value of Number " << number << " \n";
        number++;
    }

    struct stEmployee
    {
        string FistName;
        string LastName;
        double Salary;
    };
    void ReadEmployeesVector(vector<stEmployee> &vEmployees)
    {
        stEmployee STemployee;
        char addMore;
        do
        {
            cout << "\nEnter a Employee FirstName  to add : ";
            getline(cin, STemployee.FistName);
            cout << "\nEnter a Employee LastName   to add : ";
            getline(cin, STemployee.LastName);
            cout << "\nEnter a Employee Salary  to add : ";
            getline(cin, STemployee.Salary);
            vNumbers.push_back(STemployee);
            cout << setw(2) << "\nDo you want to add more numbers? Y/N ?  : ";
            cin >> addMore;

        } while (addMore == 'Y' || addMore == 'y');
    }

    void PrintEmployeesVector(vector<int> vEmplyees)
    {
        for (stEmployee &emp : vEmplyees)
        {
            cout << "FirstName : " << emp.FistName << " \n LastName : " << emp.LastName << " \n Salary : " << emp.Salary << "\n\n";
        }
        cout << endl;
    }

}