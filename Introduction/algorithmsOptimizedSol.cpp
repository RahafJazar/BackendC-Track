#include <iostream>
#include <cmath>
using namespace std;

int ReadPositiveNumbers(string message)
{
    int num;
    do
    {
        cout << message << endl;
        cin >> num;

    } while (num <= 0);
    return num;
}
int SumOfDigits(int number)
{

    int reminder = 0, sum = 0;
    do
    {
        reminder = number % 10;
        sum += reminder;
        number = number / 10;
    } while (number > 0);

    return sum;
}

int main()
{
    int sumOfDigits = SumOfDigits(ReadPositiveNumbers("Enter a positive number :"));
    cout << "Sum OF Digits is : " << sumOfDigits;
}
