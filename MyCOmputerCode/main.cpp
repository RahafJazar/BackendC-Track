#include <iostream>
#include <string>
#include <cstdLib>

using namespace std;

int ReadNumber(string msg)
{
    int n;
    cout << msg << endl;
    cin >> n;
    return n;
}

void ReadArray(int arr[100], int &lengthOfArr)
{

    lengthOfArr = ReadNumber("Enter Number Of elements");
    for (int i = 0; i < lengthOfArr; i++)
    {

        cout << "Element [" << i + 1 << "] : ";
        cin >> arr[i];
    }
}
void PrintArr(int arr[100], int &lengthOfArr)
{
    for (int i = 0; i < lengthOfArr; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int TimesRepeated(int number, int lenthOfArray, int arr[100])
{
    int count = 0;
    for (int i = 0; i < lenthOfArray; i++)
    {
        if (arr[i] == number)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[100], numToCheck, numOfElements;

    ReadArray(arr, numOfElements);

    cout << "Original Array  : ";
    PrintArr(arr, numOfElements);

    numToCheck = ReadNumber("Enter the number to check ");

    cout << "Number " << numToCheck << " is repeaed " << TimesRepeated(numToCheck, numOfElements, arr) << " time(s) \n";
}
