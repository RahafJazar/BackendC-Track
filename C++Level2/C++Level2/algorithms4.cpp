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
    shory year;
    cout << "\nEnter a  Year to check  ?";
    cin >> year;
    cin.ignore();
    return year;
}
bool IsLeapYear(short year)
{
    return ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0));
}

short NumberOFDaysInYear(short year)
{
    return IsLeapYear(year) ? 366 : 365;
}

short NumberOfHoursInYear(short Year)
{
}
int main()
{
    // 1-convert number to text
    long number = ReadNumber();
    cout << ConvertNumberToText(number);

    // 2-leap year
    short year = ReadYear();
    if (IsLeapYear(year))
    {
        cout << "\nYes , Year [" << year << "] is a leap year.\n";
    }
    else
    {
        cout << "\nNo , Year [" << year << "] isn't  a leap year.\n";
    }
    system("pause>0");
    return 0;
}