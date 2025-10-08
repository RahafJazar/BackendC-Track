#include <iostream>
#include <cmath>
using namespace std;

int ReadNumber()
{

    int number;
    cout << "enter Scope of number to print" << endl;
    cin >> number;
    return number;
}
void printReversedNumbersNto1_UsingFor(int N)
{
    cout << "****************************************" << endl;
    for (int i = N; i >= 1; i--)
    {
        cout << i << "\n";
    }
    cout << "****************************************" << endl;
}
void printReversedNumbersNto1_UsingWhile(int N)
{
    cout << "****************************************" << endl;
    int i = N;
    while (i >= 1)
    {
        cout << i << "\n";
        i--;
    }
    cout << "****************************************" << endl;
}
void printReversedNumbersNto1_UsingDoWhile(int N)
{
    cout << "****************************************" << endl;
    int i = N;
    do
    {
        cout << i << "\n";
        i--;
    } while (i >= 1);

    cout << "****************************************" << endl;
}

enum enOddOrEven
{
    Odd = 1,
    Even = 2
};
int ReadNumber()
{

    int number;
    cout << "enter Scope of number to print" << endl;
    cin >> number;
    return number;
}
enOddOrEven CheckOddOrEven(int number)
{
    if (number % 2 == 0)
        return enOddOrEven::Even;
    else
        return enOddOrEven ::Odd;
}
int sumOddNumbersFrom1toN_UsingFor(int N)
{
    int sum = 0;

    for (int i = 1; i <= N; i++)
    {
        if (CheckOddOrEven(i) == enOddOrEven::Odd)
        {
            sum += i;
        }
    }
    return sum;
}
int sumOddNumbersFrom1toN_UsingWhile(int N)
{
    int sum = 0;
    int i = 1;
    while (i <= N)
    {
        if (CheckOddOrEven(i) == enOddOrEven::Odd)
        {
            sum += i;
        }
    }
    return sum;
}
int sumOddNumbersFrom1toN_UsingDoWhile(int N)
{
    int sum = 0;
    int i = 1;
    do
    {
        if (CheckOddOrEven(i) == enOddOrEven::Odd)
        {
            sum += i;
        }
    } while (i <= N);

    return sum;
}

int main()
{
    int selectedNumber = ReadNumber();
    int num = sumOddNumbers(selectedNumber);
    cout << "Sum of Odd of " << selectedNumber << "Is : " << num;
}
