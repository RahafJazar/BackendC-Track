#include <iostream>
#include <string>
#include <cstdLib>
#include <cmath>

using namespace std;

int ReadPositiveNumber(string msg)
{
    int n;
    cout << msg << endl;
    cin >> n;
    return n;
}

int RandomNumber(int from, int to)
{
    // rand -> from 0 to max
    return rand() % (to - from + 1) + from;
}

void FillArrayWithRandomNumbers(int arr[100], int sizeOfArr)
{

    for (int i = 0; i < sizeOfArr; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintArray(int arr[100], int sizeOfArr)
{
    for (int i = 0; i < sizeOfArr; i++)
    {
        cout << arr[i] << " ";
    }
}

int FindNumberPositionInArray(int arr[100], int sizeOfArr, int searchNum)
{

    for (int i = 0; i < sizeOfArr; i++)
    {
        if (arr[i] == searchNum)
        {

            return i;
        }
    }
    return -1;
}
bool IsNumberInArray(int arr[100], int sizeOfArr, int searchNum)
{
    return FindNumberPositionInArray(arr, sizeOfArr, searchNum) != -1;
}
int main()
{
    srand((unsigned)time(NULL));
    int arr1[100];
    int arrLength;
    arrLength = ReadPositiveNumber("\nEnter Size of Array ");

    cout << "\nArray   Elements  : ";

    FillArrayWithRandomNumbers(arr1, arrLength);
    PrintArray(arr1, arrLength);

    int number = ReadPositiveNumber("\nPlease Enter a number to search For ");
    cout << "\nNumber You are looking  for is : " << number << endl;

    bool isfound = IsNumberInArray(arr1, arrLength, number);

    if (!isfound)
    {
        cout << "\nThe Number is not found :-( \n";
    }
    else
    {
        cout << "\nYes ,The Number is  found :-) \n";
    }
}
