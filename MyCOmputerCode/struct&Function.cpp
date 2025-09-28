#include <iostream>
#include <string>

using namespace std;
struct strInfo
{
    string FirstName;
    string LastName;
    int Age;
    string phone;
};
void readInfo(strInfo &info)
{
    cout << "Enter Your first name";
    getline(cin, info.FirstName);
    cout << "Enter Your last name";
    getline(cin, info.LastName);
    cout << "Enter Your  age";
    cin >> info.Age;
    cin.ignore(0, '\n');
    cout << "Enter  Tour phone ";
    cin >> info.phone;
}
void printInfo(strInfo info)
{
    cout << "**************************************************" << endl;
    cout << "Name " << info.FirstName << " " << info.LastName << "\n";
    cout << "Age :" << info.Age << "\n";
    cout << "Phone" << info.phone << "\n";
    cout << "**************************************************" << endl;
}
int main()
{
    strInfo PersonInfo;
    readInfo(PersonInfo);
    printInfo(PersonInfo);
}