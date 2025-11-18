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
}