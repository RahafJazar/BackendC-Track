#include <iostream>
#include <cmath>
using namespace std;

short ReadAge()
{
    short age;
    cout << "Enter Your Age between 18 and 45 ? " << "\n";
    cin >> age;
    return age;
}
bool validateNumberInRange(short number, short from, short to)
{
    return (number >= from && number <= to);
}

short ReadUntiAgeBetween(short from, short to)
{
    short age = 0;
    do
    {
        age = ReadAge();
    } while (!validateNumberInRange(age, from, to));

    return age;
}

void PrintResult(short age)
{
    cout << "\n your age is : " << age << endl;
}
int main()
{

    PrintResult(ReadUntiAgeBetween(18, 45));
}
