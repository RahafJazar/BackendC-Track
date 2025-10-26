#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

// Time Complexity: O(n)
// 🔹 التكرار الأول يحسب عدد مرات ظهور كل حرف → O(n)
// 🔹 التكرار الثاني يبحث عن أول حرف تكراره = 1 → O(n)
// 🔹 المجموع = O(n) + O(n) = O(n)

// Space Complexity: O(k)
// 🔹 نستخدم unordered_map لتخزين تكرار كل حرف
// 🔹 k = عدد الحروف المميزة (عادة ≤ 26 للحروف الإنجليزية)
char FirstNonDuplicate(string word)
{
    unordered_map<char, int> charCount;
    for (char c : word)
    {
        charCount[c]++;
    }
    /*يمر على الـ unordered_map، لكن unordered_map ما بيحافظ على ترتيب الحروف الأصلي
    يعني ممكن يطبع حرف غير أول واحد فعليًا في الكلمة.
    */
    for (char w : word)
    {

        if (charCount[w] == 1)
        {
            return w;
        }
    }
}
int main()
{
    string word = "abcdcaf";
    char n = FirstNonDuplicate(word);
    cout << n;
}