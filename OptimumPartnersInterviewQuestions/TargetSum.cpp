#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;
/*
✅ النتيجة النهائية
النوع	القيمة
Time Complexity	O(n) (متوسط)
Space Complexity	O(n)

*/
int main()
{
    cout << " Pairs are : \n";
    vector<int> arr = {2, 5, 3, 4, 1, 7};
    int target = 6;
    unordered_map<int, int> seenMap;

    for (int i = 0; i < arr.size(); i++)
    {
        int num = target - arr[i];
        if (seenMap.find(num) != seenMap.end())
        {
            cout << i << "," << seenMap[num] << "\n";
        }
        seenMap[arr[i]] = i;
    }
}