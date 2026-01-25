#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <vector>
#include <cassert>
using namespace std;
// create a random number from to
int RandomNumber(int From, int To)
{
    int randNumb = rand() % To + From;
    return randNumb;
}

void FillMatrixWithRandomNumbers(int matrix[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            matrix[i][j] = RandomNumber(1, 100);
        }
    }
}

void PrintMatrix(int matrix[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << setw(4) << matrix[i][j];
        }
        cout << endl;
    }
}

int removeDuplicates(vector<int> &nums)
{
    int counter = 1;
    int uniqueElementIndex = 0;
    int counteredElementIndex = 0;
    while (counteredElementIndex < nums.size())
    {
        if (nums.at(uniqueElementIndex) != nums.at(counteredElementIndex))
        {
            counter++;
            uniqueElementIndex++;
            nums.at(uniqueElementIndex) = nums.at(counteredElementIndex);
        }
        counteredElementIndex++;
    }
    return counter;
}

int searchInsert(vector<int> &nums, int target)
{
    int num = 0;
    int index = 0;
    int left = 0;
    int right = nums.size() - 1;
    int counter = 0;
    while (num != target)
    {
        if (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
            {
                index = mid;
                num = nums[mid]
            }
            else if (nums[mid] < target)
            {
                left = mid + 1;
            }
            else if (nums[mid] > target)
            {
                right = mid - 1;
            }
        }
        else
        {
            if (num < nums[nums.size() - 1])
            {
                return left;
            }
            index++;
            num++;
        }
    }
    return index;
}
int main()
{

    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4}; // Input array
    int k = searchInsert(nums, )
}