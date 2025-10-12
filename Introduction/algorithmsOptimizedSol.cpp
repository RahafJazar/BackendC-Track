#include <iostream>
#include <cmath>
using namespace std;

enum enPrimeNotPrime
{
    Prime = 1,
    NotPrime = 2
};
float ReadPositiveNumbers(string message)
{
    float num;
    do
    {

        cout << message << endl;
        cin >> num;
        return num;
    } while (num <= 0);
}
enPrimeNotPrime checkPrime(int number)
{
    
}
int main()
{

    float result = sumNmbers();
    cout << "Result is : " << result;
}
