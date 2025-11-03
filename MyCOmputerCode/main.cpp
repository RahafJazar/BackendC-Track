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

void FillArray(int arr[100], int &arrLength)
{
    arrLength = ReadPositiveNumber("Enter Number of array length");
    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = ReadPositiveNumber("Enter a number ?");
    }
}
 
void PrintArray(int arr[100], int sizeOfArr)
{
    for (int i = 0; i < sizeOfArr; i++)
    {
        cout << arr[i] << " ";
    }
}

bool IsPalindromeArray(int arr[100], int sizeOfArr){
    
}

int main()
{
    srand((unsigned)time(NULL));
    int arr1[100], arr2[100], arr1Length = 0, arr2Length = 0;

    FillArray(arr1, arr1Length);
    cout << "\nArray1 Elements : ";
    PrintArray(arr1, arr1Length);

    CopyDistinctNumberToArray(arr1, arr2, arr1Length, arr2Length);

    cout << "\nArray2 Distinct Element :";
    PrintArray(arr2, arr2Length);
}
