#include <iostream>
#include <cmath>
using namespace std;
enum enDaysOfWeek
{
    Sun = 1,
    Mon,
    Tue,
    Wed,
    Thu,
    Fri,
    Sat
};
int ReadNumberInRange(string message, int from, int to)
{
    int num;
    do
    {
        cout << message << endl;
        cin >> num;

    } while (num < from || num > to);
    return num;
}
enDaysOfWeek ReadDayOfWeek()
{
    return (enDaysOfWeek)ReadNumberInRange("please enter day number sun=1,mon=2,...,sat=7", 1, 7);
}
string GetDayOfWeek(enDaysOfWeek daysOfWeek)
{
    switch (daysOfWeek)
    {
    case enDaysOfWeek::Sun:
        return "Sunday";
        break;
    case enDaysOfWeek::Mon:
        return "Monday";
        break;
    case enDaysOfWeek::Tue:
        return "Tuesday";
        break;
    case enDaysOfWeek::Wed:
        return "Wednesday";
        break;
    case enDaysOfWeek::Thu:
        return "Thursday";
        break;
    case enDaysOfWeek::Fri:
        return "Friday";
        break;
    case enDaysOfWeek::Sat:
        return "Saturday";
        break;
    }
}

int main()
{
    string day = GetDayOfWeek(ReadDayOfWeek());
    cout << "day is  : " << day << endl;
}
