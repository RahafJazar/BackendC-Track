#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;
unordered_set<int> findUniqueElements(vector<int> arr)
{
    unordered_map<int, int> freq;
    unordered_set<int> uniquesNum;
    for (int n : arr)
    {
        freq[n]++;
    }

    for (auto w : freq)
    {
        if (w.second == 1)
            uniquesNum.insert(w.first);
    }
    return uniquesNum;
}
int main()
{
    vector<int> arr = {2, 4, 2, 5, 4, 2, 6};
    unordered_set<int> uniquesNum;

    uniquesNum = findUniqueElements(arr);

    for (int x : uniquesNum)
    {
        cout << x << " ";
    }
}