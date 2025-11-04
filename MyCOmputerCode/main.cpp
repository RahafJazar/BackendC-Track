#include <iostream>
#include <string>
#include <cstdLib>
#include <cmath>

using namespace std;

float ReadPositiveNumber(string msg)
{
    float n;
    cout << msg << endl;
    cin >> n;
    return n;
}
float MySqrt(float number)
{
    return pow(number, 0.5); // ي ؤقم للقوة نص  هو  الجذر  التربيعي
}
int main()
{

    float num = ReadPositiveNumber("Please Enter  number ? ");
    cout << "My  sqrt  Result : " << MySqrt(num) << endl;
    cout << "C++ Sqrt Result : " << sqrt(num) << endl;
}
