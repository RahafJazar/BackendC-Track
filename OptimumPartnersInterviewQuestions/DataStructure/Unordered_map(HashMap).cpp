#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
unordered_map<int, int> unorderedMap(vector<int> arr)
{
    unordered_map<int, int> freq;
    for (int n : arr)
    {
        freq[n]++;
    }

    return freq;
}
int main()
{
    vector<int> arr = {2, 44, 5, 44, 2, 2, 44, 1};
    unordered_map<int, int> freq;
    freq = unorderedMap(arr);
    cout << "Number Frequencies:\n";
    for (auto w : freq)
    {
        cout << w.first << " : " << w.second << endl;
    }
}