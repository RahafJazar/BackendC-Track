#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
enum enColor
{

};
enum enGender
{
  Male,
  Female
};
enum enMaritalStatus
{
  Single,
  Married
};
struct stAddress
{
  /* data */
  string City;
  string Country;
  string StrretName;
  string BuildingNo;
  string POBox;
  string ZipCode;
};

struct stContactInfo
{
  /* data */
  string Phone;
  string email;
  stAddress Address;
};

struct stJobInfo
{
  string JobName;
  string Company;
  float MonthlySalary;
  float YearlySalary()
  {
    return MonthlySalary * 12;
  }
};
struct stPerson
{
  string FirstName;
  string LastName;
  short Age;
  stContactInfo ContactInfo;
  stJobInfo JobInf;
  enMaritalStatus MaritalStatus;
  enGender Gender;
  enColor FavouriteColor;
  string printFullName()
  {
    return FirstName + " " + LastName;
  }
};
int main()
{
  stPerson person1;

  int gender;
  int yearOfMarriege = 1;
  int relationStatus = 0;

  // HW1 of variables & User Inputs

  cout << "Please enter your FirstName: " << endl;
  cin >> person1.FirstName;
  cout << "Please enter your LastName: " << endl;
  cin >> person1.LastName;
  cout << "Please enter your Age: " << endl;
  cin >> person1.Age;
  cout << "Please enter your City: " << endl;
  cin >> person1.ContactInfo.Address.City;
  cout << "Please enter your Country: " << endl;
  cin >> person1.ContactInfo.Address.Country;
  cout << "Please enter your Monthly Salaty: " << endl;
  cin >> person1.JobInf.MonthlySalary;
  cout << "Please enter your Gender:  (Male=0 or Female=1)" << endl;
  cin >> gender;
  cout << "Please enter your relation status: (Single :0 ,Marriage :1) " << endl;
  cin >> relationStatus;
  if (relationStatus == 1)
  {
    cout << "Please enter your Married: If you marriage  " << endl;
    cin >> yearOfMarriege;
  }

  cout << "**********************************" << endl;
  cout << "Name :" << person1.printFullName() << endl;
  cout << "Age  :" << person1.Age << endl;
  cout << "City :" << person1.ContactInfo.Address.City << endl;
  cout << "Country :" << person1.ContactInfo.Address.Country << endl;
  cout << "Monthly Salary :" << person1.JobInf.MonthlySalary << endl;
  cout << "Yearly Salary :" << person1.JobInf.YearlySalary() << endl;
  cout << "Gender :" << static_cast<enGender>(gender) << endl;
  cout << "Married :" << yearOfMarriege << endl;
  cout << "Status :" << static_cast<enMaritalStatus>(relationStatus) << endl;
  cout << "**********************************" << endl;

  // // HW2
  // int num1 = 20, num2 = 30, num3 = 10;
  // int totalSum = num1 + num2 + num3;
  // cout << num1 << "+ \n"
  //      << num2 << "+ \n"
  //      << num3 << endl;
  // cout << "____________________________________" << endl;
  // cout << "Total = " << totalSum;

  // // Hw3
  // int currentAge = 25;
  // cout << "After 5 years you will be " << currentAge + 5 << "years old \n";

  // operators
  // hw1

  // short a, b;
  // cout << "Please enter the first number A ? \n";
  // cin >> a;
  // cout << "Please enter the first number B? \n";
  // cin >> b;

  // cout << a << '+' << b << '=' << (a + b) << "\n";
  // cout << a << '-' + b << '=' << (a - b) << "\n";
  // cout << a << '*' + b << '=' << (a * b) << "\n";
  // cout << a << '/' + b << '=' << (a / b) << "\n";
  // cout << a << '%' + b << '=' << (a % b) << "\n";

  //
}