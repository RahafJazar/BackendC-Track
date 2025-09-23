#include <iostream>
#include <string>
using namespace std;
enum enGender
{
    Male,
    Female
};
struct stAddress
{
    string Country;
    string City;
};
struct stPerson
{
    /* data */
    string FullName;
    short Age;
    stAddress address;
    enGender gender;
};

void myFunction()
{ // procedure : because it is void
    cout << "THis is my first function  , it got executed :-)" << endl;
}
void myFunction2()
{
    cout << "This is my second function , it got  executed :-)" << "\n";
    cout << "**********************************" << "\n";
}
string myFunction3()
{
    return "This is my first returning value function , this is  the value ";
}

// Hw1
void displayMyCartInfo()
{
    stPerson p1;
    int gender;
    cout << "Enter your Fullname " << "\n";
    getline(cin, p1.FullName);
    cout << "Enter your  Age " << "\n";
    cin >> p1.Age;
    cin.ignore(); // 🔥 مهم عشان يمسح \n من البفر
    cout << "Enter your  Country " << "\n";
    getline(cin, p1.address.Country);
    cout << "Enter your  City " << "\n";
    getline(cin, p1.address.City);
    cout << "Enter your  Gender  Male :0 ,Female :1  " << "\n";
    cin >> gender;
    cin.ignore(1, '\n');

    cout << "***************************************" << endl;
    cout << "Name : " << p1.FullName << "\n";
    cout << "Age : " << p1.Age << "\n";
    cout << "City :" << p1.address.City << "\n";
    cout << "Country : " << p1.address.Country << "\n";
    // cout << "Gender  : " << enGender << "\n";
    cout << "***************************************" << endl;
}
void printSquareStars()
{
    cout << "********" << "\n";
    cout << "********" << "\n";
    cout << "********" << "\n";
    cout << "********" << endl;
}

void printSentences()
{
    cout << "I Love Programming " << "\n";
    cout << "I Promise to be the best developer ever ! " << "\n";
}

void printH()
{
    cout << "*   *" << "\n";
    cout << "*   *" << "\n";
    cout << "*****" << "\n";
    cout << "*   *" << "\n";
    cout << "*   *" << endl;
    ;
}

int main()
{
    string result = myFunction3();
    cout << result << endl;
    return 0;
}