#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string message)
{
    int number;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number < 0);

    return number;
}
int DivideTwoNumbers(int dividend, int divisor)
{
    return (dividend / divisor);
}
int ModulusTwoNumbers(int dividend, int divisor)
{
    return (dividend % divisor);
}
int ReversedOfNumber(int number)
{
    int modulus = 0;

    int revversed = 0;
    while (number != 0)
    {
        modulus = ModulusTwoNumbers(number, 10);
        revversed = (revversed * 10) + modulus;
        number = DivideTwoNumbers(number, 10);
    }
    return revversed;
}

void PrintDigits(int number)
{
    while (number > 0)
    {
        int reminder = ModulusTwoNumbers(number, 10);
        number = DivideTwoNumbers(number, 10);
        cout << reminder << endl;
    }
}
int main()
{

    int number = ReadPositiveNumber("please enter positive number");
    int n = ReversedOfNumber(number);
    PrintDigits(n);
}
