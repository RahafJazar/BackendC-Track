#include <iostream>
#include <string>
using namespace std;
int main()
{
    // string myString = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // cout << "Length of sting is : " << myString.length() << "\n";
    // cout << "First char of String  : " << myString[0] << "\n";
    // cout << "third char of String  : " << myString[2] << "\n";

    // string s1 = "10", s2 = "20"; // يعاملوا معاملة الchr
    // string s3 = s1 + s2;         // concatenation
    // cout << "S1 concat S2 = " << s3 << "\n";
    // int sum = stoi(s1) + stoi(s2);
    // cout << "Sum is :" << sum << endl;
    // ; // sum

    // string fullName;
    // // cin >> fullName;
    // // cout << fullName << endl;

    // getline(cin, fullName);
    // cout << "With getline  : " << fullName;

    string s1, s2, s3;
    // HW1
    cout << "Please Enter String 1" << "\n";
    getline(cin, s1);

    cout << "Please Enter string 2" << "\n";
    cin >> s2;

    cout << "Please enter string 3 " << "\n";
    cin >> s3;

    cout << "******************************************************************************" << endl;
    cout << "The length of  string 1 is " << s1.length() << "\n";
    cout << "Characters at 0 ,2 ,4, 7 are : " << s1[0] << "," << s1[2] << "," << s1[4] << "," << s1[7] << "\n";
    cout << "Concatenating string 2 and string 3 is : " << s2 + s3 << "\n";
    cout << s2 << "+" << s3 << "= " << stoi(s2) + stoi(s3) << endl;
}