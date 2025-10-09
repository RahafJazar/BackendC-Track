#include <iostream>
#include <cmath>
using namespace std;

int ReadNumber(int &N ,int M)

{
    int number = 0;
    do
    {
        cout << "enter  number to print " << endl;
        cin >> N;
          cout << "enter  number to print " << endl;
        cin >> N;
    } while (number <= 0);

    return number;
}
int calculatePowerOfN(int N, int power)
{
    int nPower = 1;
    for (int i = 1; i <= power; i++)
    {
        nPower *= N;
    }
    return nPower;
}
void PowerOf2_3_4(int number)
{
    cout << "power 2: " << calculatePowerOfN(number, 2) << "\n";
    cout << "power 3: " << calculatePowerOfN(number, 3) << "\n";
    cout << "power 4: " << calculatePowerOfN(number, 4) << "\n";
}
int main()
{
    PowerOf2_3_4(ReadNumber());
    return 0;
}
