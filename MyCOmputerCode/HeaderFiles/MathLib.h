#pragma once

#include <iostream>
using namespace std;

namespace MathLib
{
    int Sum2Numbers(int num1, int num2)
    {
        return num1 + num2;
    }

    int MaxOfTwo(int num1, int num2)
    {
        if (num1 > = num2)
            return num1;
        else
            return num2;
    }
    int MaxOfTwo(int num1, int num2)
    {
        if (num1 <= num2)
            return num1;
        else
            return num2;
    }
    int Square(int num)
    {
        return num * num;
    }

}