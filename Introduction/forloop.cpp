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

void printArrWithBreak()
{

    int arr[10] = {10, 20, 44, 55, 33, 22, 99, 88, 99, 100};
    int searchFor = 20;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << "We are at iteration " << i << endl;
        if (arr[i] == searchFor)
        {
            cout << endl
                 << searchFor << " was found at iterattion " << i << endl;
            break;
        }
    }
}
int printArrWithContiue()
{
    int number, sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        cout << "Please Enter  a Number  \n";
        cin >> number;
        if (number > 50)
        {
            cout << "The number is greater than 50 and won't be calculated \n";
            continue;
        }
        sum += number;
    }
    return sum;
}
int main()
{
    int sum = printArrWithContiue();
    cout << "sum is " << sum << endl;
}