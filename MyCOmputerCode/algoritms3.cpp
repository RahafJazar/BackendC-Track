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

    int left = 0;
    int right = nums.size() - 1;
    if (target > nums[nums.size() - 1])
    {
        return right + 1;
    }
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (nums[mid] == target)
        {
            return mid;
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

    return left;
}

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int k = m + n - 1;
    int i = m - 1;
    int j = n - 1;
    // if n>0 && m>0

    while (j >= 0)
    {

        if (i >= 0 && nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            i--;
        }
        else
        {
            nums1[k] = nums2[j];
            j--;
        }

        k--;
    }
}

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    // his syntax : val(x), left(nullptr) ? That’s called an "initializer list".
    TreeNode() : val(0), left(nullptr), right(nullptr) {};      // it creates an empty node with val 0 and  no children;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}; // it creates an node with val x and no children;
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {};
};
TreeNode *sortedArrayToBSTRecur(vector<int> &nums, int start, int end)
{
    if (start > end)
    {
        return nullptr;
    };
    int mid = (start + end) / 2;
    TreeNode *root = new TreeNode(nums[mid]);
    root->left = sortedArrayToBSTRecur(nums, start, mid - 1);
    root->right = sortedArrayToBSTRecur(nums, mid + 1, end);
    return root;
}
TreeNode *sortedArrayToBST(vector<int> &nums)
{
    int start = 0;
    int end = nums.size() - 1;
    return sortedArrayToBSTRecur(nums, start, end);
}
void PrintLevelOrder(TreeNode *root){
    
}
int main()
{

    vector<int> nums1 = {10, -3, 0, 5, 9}; // Input array
    TreeNode *res=new TreeNode();
    res= sortedArrayToBST(nums1);
}