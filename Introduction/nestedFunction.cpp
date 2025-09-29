#include <iostream>
using namespace std;
enum enWeekDay
{
    Sun = 1,
    Mon,
    Tue,
    Wed,
    Thu,
    Fri,
    Sat
};

void showMenu()
{
    cout << "*******************************\n";
    cout << "         Week Days              \n";
    cout << "*******************************\n";
    cout << "1: Sunday \n";
    cout << "2: Monday \n";
    cout << "3: Tuesday \n";
    cout << "4: Wednesay \n";
    cout << "5: Thursday \n";
    cout << "6: Friday \n";
    cout << "7: Saturday \n";
    cout << "_________________________________\n";
    cout << "Please enter the number of the day \n";
}

enWeekDay ReadWeekDay()
{
}

string GetWeekDayName(enWeekDay day)
{
}

int main()
{
    showMenu();
    short day;

    cin >> day;
}