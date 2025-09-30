#include <iostream>
using namespace std;

void readArrayData(int Arr[100], int &Length)
{

    cout << "How Many Numbers do you want to enter ? 1 to 100 ? " << endl;
    cin >> Length;
    for (int i = 0; i <= Length - 1; i++)
    {
        cout << "Please Enter Number " << i + 1 << "\n";
        cin >> Arr[i];
    }
}
void printArrayData(int Arr[100], int Length)
{
    for (int i = 0; i <= Length - 1; i++)
    {
        cout << "Number [" << i + 1 << "] : " << Arr[i] << "\n";
    }
}
int calculateSum(int Arr[100], int Length)
{
    int sum = 0;
    for (int i = 0; i <= Length - 1; i++)
    {
        sum += Arr[i];
    }
    return sum;
}
// float calculateAvg(int Arr[100], int Length)
// {
//     int sum = calculateSum(Arr, Length);
//     float avg = (float)sum / Length;
//     return avg;
// }
int main()
{

    int Arr[100], Length = 0; // حجز 100 رقم بالميموري
    readArrayData(Arr, Length);
    printArrayData(Arr, Length);
    cout << "**************************************" << endl;
    int sum = calculateSum(Arr, Length);
    cout << "Sum = " << sum << endl;
    cout << "Avg = " << (float)sum / Length << endl;
}