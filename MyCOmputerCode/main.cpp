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
void PrintInvertedLetterPatern(int number)
{
    for (int row = 65 + number -1 ; row >= 65; row--)
    {
        for (int column =1 ; column  <= number - (65+number -1 -row); column++)
        {
            cout << char(row) << " ";
        }
        cout << endl;
       
    }
}
int main()
{

    int number = ReadPositiveNumber("please enter positive number");
    PrintInvertedLetterPatern(number);
}
