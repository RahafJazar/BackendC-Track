#include <iostream>
#include <string>
#include <cstdLib>

using namespace std;

int RandomNumber(int from, int to)
{
    // rand -> from 0 to max
    return rand() % (to - from + 1) + from;
}

int main()
{
    srand((unsigned)time(NULL));
    cout <<RandomNumber(1,5)<<endl;
    cout <<RandomNumber(1,5)<<endl;
}
