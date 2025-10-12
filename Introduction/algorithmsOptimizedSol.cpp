#include <iostream>
#include <cmath>
using namespace std;

enum enOperationType
{
    Multiplication='*',
    Subtraction,
    Additin,
    Division
};

float ReadNumber()
{
    float number;
    cout << "Enter Number ? " << "\n";
    cin >> number;
    return number;
}
enOperationType ReadOpType()
{
    enOperationType opType;
    cout << "Enter Operation  to apply into two numbers ? " << "\n";
    cin >>
}
float getResultFromOperation(strCalculation calc)
{

    switch (calc.Operation)
    {
    case '*':
        return calc.Number1 * calc.Number2;
        break;
    case '-':
        return calc.Number1 - calc.Number2;
        break;
    case '+':
        return calc.Number1 + calc.Number2;
        break;
    case '/':
        return calc.Number1 / calc.Number2;
        break;
        1 default : break;
    }
}
int main()
{
    float number1 = ReadNumber();
    float number2 = ReadNumber();

    readCalculationInfo(calculation);
    cout << calculation.Number1 << calculation.Operation << calculation.Number2 << "=" << getResultFromOperation(calculation);
}
