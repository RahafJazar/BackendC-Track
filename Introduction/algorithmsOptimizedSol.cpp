#include <iostream>

using namespace std;
enum enPrinDir
{
    FirstNameLastName,
    LastNameFistName

};
struct strInfo
{
    string FirstName;
    string LastName;
};

strInfo readInfo()
{
    strInfo info;
    cout << "Enter Your  First Name  ?" << "\n";
    cin >> info.FirstName;
    cout << "Enter Your Last Name " << "\n";
    cin >> info.LastName;

    return info;
}

string getFullName(strInfo info, enPrinDir printDir)
{
    string fullName = "";
    if (printDir == enPrinDir::LastNameFistName)
        fullName = info.LastName + " " + info.FirstName;
    else
        fullName = info.FirstName + " " + info.LastName;
    return fullName;
}

void printFullName(string fullname)
{

    cout << "Your Full Name is: " << fullname << endl;
}
int main()
{

    strInfo info = readInfo();
    string fullname = getFullName(info, enPrinDir::FirstNameLastName);
    printFullName((fullname));
}
