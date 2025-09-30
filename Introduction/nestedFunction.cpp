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
    int dayNumber;
    cin >> dayNumber;
    return (enWeekDay)dayNumber;
}

string GetWeekDayName(enWeekDay day)
{
    switch (day)
    {
    case enWeekDay::Sun:
        return "Sunday";
        break;
    case enWeekDay::Mon:
        return "Monday";
        break;
    case enWeekDay::Tue:
        return "Tuesday";
        break;
    case enWeekDay::Wed:
        return "Wednesday";
        break;
    case enWeekDay::Thu:
        return "Thursday";
        break;
    case enWeekDay::Fri:
        return "Friday";
        break;
    case enWeekDay::Sat:
        return "Saturday";
        break;

    default:
        return "not a week day ";
        break;
    }
}

int main()
{
    showMenu();
    cout << "Today is " << GetWeekDayName(ReadWeekDay());
}