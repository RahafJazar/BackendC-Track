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

void SumOf2Arrays(int arr1[100], int arr2[100], int arrSum[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        arrSum[i] = arr1[i] + arr2[i];
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int arr1[100], arr2[100], sumArr[100], arrLength;
    arrLength = ReadPositiveNumber("Enter Size of Array ");
    FillArrayWithRandomNumbers(arr1, arrLength);
    FillArrayWithRandomNumbers(arr2, arrLength);
    cout << "\nArray1 Elements : ";
    PrintArray(arr1, arrLength);

    cout << "\nArray2 Elements : ";
    PrintArray(arr2, arrLength);

    SumOf2Arrays(arr1, arr2, sumArr, arrLength);

    cout << "\nSum Of array1 and array2 elements : ";
    PrintArray(sumArr, arrLength);
}
