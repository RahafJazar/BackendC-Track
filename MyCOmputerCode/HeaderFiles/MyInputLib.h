#pragma once
#include <iostream>
using namespace std;

namespace MyInputLib
{
    int ReadNumber(string message)
    {
        cout << message << endl;
        int number;
        cin >> number;
        return number;
    }

    string ReadString(string message)
    {
        cout << message << endl;
        string text;
        getline(cin, text);
        return text;
    }
}