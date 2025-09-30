#include <iostream>
using namespace std;

int ReadNumber()
{

    int number;
    cout << "enter Scope of number to print" << endl;
    cin >> number;
    return number;
}
int FactorialOfN(int N)
{
    double factorial = 1;
    while (N < 0)
    {
        cout << "InValid Number please enter positive number";
        ReadNumber();
    }

    for (int i = N; i >= 1; i--)
    {
        factorial = factorial * i;
    }
    return factorial;
}
int main()
{
    int selectedNumber = ReadNumber();
    int fact = FactorialOfN(selectedNumber);
    cout << "Factorial of  " << selectedNumber << "Is : " << fact;
}
