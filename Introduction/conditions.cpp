#include <iostream>
#include <string>
using namespace std;

void printMonth(short month)
{
    if (month == 1)
    {
        cout << "January";
    }
    else if (month == 2)
    {
        cout << "February";
    }
    else if (month == 3)
    {
        cout << "March";
    }
    else if (month == 4)
    {
        cout << "April";
    }
    else if (month == 5)
    {
        cout << "May";
    }
    else if (month == 6)
    {
        cout << "Jun";
    }
    else if (month == 7)
    {
        cout << "July";
    }
    else if (month == 8)
    {
        cout << "August";
    }
    else if (month == 9)
    {
        cout << "Septmeper";
    }
    else if (month == 10)
    {
        cout << "October";
    }
    else if (month == 11)
    {
        cout << "November";
    }
    else if (month == 12)
    {
        cout << "December";
    }
    else
    {
        cout << "Wrong Month ";
    }
}
int main()
{
    short month;
    cout << "Enter  month ? " << "\n";
    cin >> month;
    printMonth(month);
}
