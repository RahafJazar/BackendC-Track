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
int CountDigitFrequency(short digit, int number)
{
    // index  على ال forloop لانه رقم ما بتقدري تعملي

    int freqCount = 0, reminder = 0;
    while (number != 0)
    {
        reminder = number % 10; //extract the last digit of the nnumber
        number = number / 10; //remove the last digit from the number
        if (reminder == digit)
        {
            freqCount++;
        }
    }
    return freqCount;
}
int main()
{

    int number = ReadPositiveNumber("please enter positive number");
    short digitToCheck = ReadPositiveNumber("enter  one digit to check");
    cout << "\n Digit  " << digitToCheck << " Frequency is  " << CountDigitFrequency(digitToCheck, number) << " Times(s) . \n";
}