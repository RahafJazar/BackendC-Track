#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;
bool isValid(string s)
{
    stack<char> st;

    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
            {
                return false;
            }
            char top = st.top();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '['))
            {

                return false;
            }
            st.pop();
        }
        {
            /* code */
        }
        return st.empty();
    }
}
int main()
{
    
}