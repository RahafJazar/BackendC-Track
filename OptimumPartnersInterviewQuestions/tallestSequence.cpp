#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    string s = "000111111110000011111001";

    char current_char = s[0];
    char max_char = s[0];

    int current_count = 1;
    int max_count = 1;
    int max_index = 0;

    for (int i = 1; i < s.length() - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            if (current_count >= max_count)
            {
                max_count = current_count;
                max_char = s[i];
                max_index = i;
                current_count = 1;
               
            }
        }
        current_count++;
    }
    cout << s.substr(max_index, max_count);
}