#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = 0;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == target)
            return mid;

        else if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1; // ما لقيناه
}
int main()
{
    int arr[] = {2, 4, 7, 10, 15, 18, 21};
    int n = 7;
    int target = 13;
    int result = binarySearch(arr, n, target);
    if (result != -1)
        cout << "Found at index " << result;
    else
        cout << "Not Found";
}