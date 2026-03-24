#include <iostream>
#include <string>

using namespace std;

int ReadNumber()
{
    int n;
    cout << "Enter a  number ?";
    cin >> n;
    cin.ignore();
    return n;
}
string ConvertNumberToText(int number)
{
    if (n == 0)
    {
        return "";
    }
    if (n >= 1000000)
    {
        /* code */
        return ConvertNumberToText(n / 1000000) + " Millons " + ConvertNumberToText(n % 1000000);
    }
    if (n >= 1000)
    {
        return ConvertNumberToText(n / 1000) + " "+"Thousands" +" "+ ConvertNumberToText(n % 1000);
    }
    if (n >= 100)
    {
        return ConvertNumberToText(n / 100) + " "+ "Hundreds" +" "+ ConvertNumberToText(n % 100);
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
                           "Sixteen", "Seventeen", "Eighteen", "Nineteen"} return arr[n] +
                       " ";
    }
}

int main()
{
    int number = ReadNumber();
    cout << ConvertNumberToText(number);

    system("pause>0");
    return 0;
}