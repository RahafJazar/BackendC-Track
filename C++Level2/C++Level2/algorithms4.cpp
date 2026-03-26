#include <iostream>
#include <string>

using namespace std;

long ReadNumber()
{
    long n;
    cout << "\nEnter a  number ?";
    cin >> n;
    cin.ignore();
    return n;
}
string ConvertNumberToText(long n)
{
    if (n == 0)
    {
        return "";
    }
    if (n >= 1000000000)
    {
        /* code */
        return ConvertNumberToText(n / 1000000000) + " " + "Billion" + " " + ConvertNumberToText(n % 1000000000);
    }
    if (n >= 1000000)
    {
        /* code */
        return ConvertNumberToText(n / 1000000) + " " + "Million" + " " + ConvertNumberToText(n % 1000000);
    }
    if (n >= 1000)
    {
        return ConvertNumberToText(n / 1000) + " " + "Thousand" + " " + ConvertNumberToText(n % 1000);
    }
    if (n >= 100)
    {
        return ConvertNumberToText(n / 100) + " " + "Hundred" + " " + ConvertNumberToText(n % 100);
    }
    if (n >= 20 && n <= 99)
    {
        string arr[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
        return arr[n / 10] + " " + ConvertNumberToText(n % 10);
    }
    if (n >= 1 && n <= 19)
    {
        string arr[] = {
            "", "One", "Two", "Three", "Four", "Five",
            "Six", "Seven", "Eight", "Nine", "Ten",
            "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen",
            "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

        return arr[n] + " ";
    }
    return "";
}
short ReadYear()
{
    short year;
    cout << "\nEnter a  Year to check  ?";
    cin >> year;
    cin.ignore();
    return year;
}
short ReadMonth()
{
    short month;
    cout << "\nEnter a  Month to check  ?";
    cin >> month;
    cin.ignore();
    return month;
}
bool IsLeapYear(short year)
{
    return ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0));
}

short NumberOFDaysInYear(short year)
{
    return IsLeapYear(year) ? 366 : 365;
}

short NumberOfHoursInYear(short year)
{
    return NumberOFDaysInYear(year) * 24;
}
int NumberOfMinutesInYear(short year)
{
    return NumberOfHoursInYear(year) * 60;
}
int NumberOfsecondsInYear(short year)
{
    return NumberOfMinutesInYear(year) * 60;
}

short NumberOfDaysInMonth(short year, short month)
{
    if (month < 1 || month > 12)
    {
        return 0;
    }
    int NumbOfdays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (month == 2) ? (IsLeapYear(year) ? 29 : 28) : NumbOfdays[month - 1];
}
short NumberOfHoursInMonth(short year, short month)
{
    return NumberOfDaysInMonth(year, month) * 24;
}
int NumberOfMinutesInMonth(short year, short month)
{
    return NumberOfHoursInMonth(year, month) * 60;
}
int NumberOfSecondsInMonth(short year, short month)
{
    return NumberOfMinutesInMonth(year, month) * 60;
}
int main()
{
    // // 1-convert number to text
    // long number = ReadNumber();
    // cout << ConvertNumberToText(number);

    // // 2-leap year
    // short year = ReadYear();
    // if (IsLeapYear(year))
    // {
    //     cout << "\nYes , Year [" << year << "] is a leap year.\n";
    // }
    // else
    // {
    //     cout << "\nNo , Year [" << year << "] isn't  a leap year.\n";
    // }

    // 4-days, hours,  minutes,seconds
    short year1 = ReadYear();
    cout << "Number of Days        in  Year [" << year1 << "] is " << NumberOFDaysInYear(year1) << endl;
    cout << "Number of Hours       in  Year [" << year1 << "] is " << NumberOfHoursInYear(year1) << endl;
    cout << "Number of Minutes     in  Year [" << year1 << "] is " << NumberOfMinutesInYear(year1) << endl;
    cout << "Number of Seconds     in  Year [" << year1 << "] is " << NumberOfsecondsInYear(year1) << endl;

    short year2 = ReadYear();
    short month2 = ReadMonth();
    cout << "Number of Days        in  Month [" << month2 << "] is " << NumberOfDaysInMonth(year2, month2) << endl;
    cout << "Number of Hours         in  Month [" << month2 << "] is " << NumberOfHoursInMonth(year2, month2) << endl;
    cout << "Number of Minutes        in  Month [" << month2 << "] is " << NumberOfMinutesInMonth(year2, month2) << endl;
    cout << "Number of Seconds        in  Month [" << month2 << "] is " << NumberOfSecondsInMonth(year2, month2) << endl;
    system("pause>0");
    return 0;
}