#include <iostream>
#include <string>
using namespace std;
/*
🔹 داخل اللوب

كل عملية داخل اللوب هي O(1):

المقارنة if (c == '*') → O(1)

push_back() → O(1) في العادة (أحيانًا نادرًا قد تعمل reallocation، بس بالتعريف العام constant amortized time)

pop_back() → O(1)

empty() → O(1)

ما في أي erase() أو insert() في النص، يعني مافي إعادة ترتيب لعناصر كثيرة.

إجمالي Time Complexity = O(n) 
*/
string RemoveStarsFromString(string word)
{
    string result = "";
    int i = 0;
    for (char c : word)
    {
        if (c == '*')
        {
            if (!result.empty())
            {
                result.pop_back();
            }
        }
        else
        {
            result.push_back(c);
        }
    }

    return result;
}
int main()
{
    string word = "leet***cod*e";
    string result = RemoveStarsFromString(word);
    cout << result << endl;
}