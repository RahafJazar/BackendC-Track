#include <iostream>
#include <cmath>
using namespace std;

float ReadPositiveNumber(string message)
{
    float num;
    do
    {
        cout << message << endl;
        cin >> num;

    } while (num <= 0);
    return num;
}

float TotalBillAfterTaxAndServiceFee(float billValue)
{

    billValue += (billValue * 0.1);

    billValue += (billValue * 0.16);

    return billValue;
}
int main()
{
    float billValue = ReadPositiveNumber("Please enter  Bill Value :");

    cout << "Total Bill before is : " << billValue << endl;

    float billValueAfter = TotalBillAfterTaxAndServiceFee(billValue);
    cout << "Total Bill After Service and tax fee , bill will be : " << billValueAfter << "\n";
}
