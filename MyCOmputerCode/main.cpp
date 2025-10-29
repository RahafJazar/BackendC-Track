#include <iostream>
#include <string>
#include <cstdLib>

using namespace std;

int ReadNumber()
{
    cout << "please Enter number of generated keys";
}

int RandomNumber(int from, int to)
{
    // rand -> from 0 to max
    return rand() % (to - from + 1) + from;
}

string generateKey()
{
    string s = "";
    for (int i = 0; i < 4; i++)
    {
        s += char(RandomNumber(33, 47));
    }
}

int main()
{
    srand((unsigned)time(NULL));
}
