#include <iostream>
#include <string>
using namespace std;
int main()
{
    string myString = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "Length of sting is : " << myString.length() << "\n";
    cout << "First char of String  : " << myString[0] << "\n";
    cout << "third char of String  : " << myString[2] << "\n";

    string s1 = "10", s2 = "20"; // يعاملوا معاملة الchr
    string s3 = s1 + s2;         // concatenation
    cout << "S1 concat S2 = " << s3 << "\n";
    int sum = stoi(s1) + stoi(s2);
    cout << "Sum is :" << sum; // sum
}