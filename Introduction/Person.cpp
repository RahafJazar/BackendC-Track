#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    // string name = "Rahaf Bassam Jazar";
    // int age = 44;
    // string city = "Amman", country = "Jordan";
    // int monthSalary = 5000, yearSalary = monthSalary * 12;
    // char gender = 'M';
    // int yearOfMarriege = 1;

    // // HW1 of variables & User Inputs

    // cout << "Please enter your Name: " << endl;
    // cin >> name;
    // cout << "Please enter your Age: " << endl;
    // cin >> age;
    // cout << "Please enter your City: " << endl;
    // cin >> city;
    // cout << "Please enter your Country: " << endl;
    // cin >> country;
    // cout << "Please enter your Monthly Salaty: " << endl;
    // cin >> monthSalary;
    // cout << "Please enter your Gender: " << endl;
    // cin >> gender;
    // cout << "Please enter your Married: " << endl;
    // cin >> yearOfMarriege;

    // cout << "**********************************" << endl;
    // cout << "Name :" << name << endl;
    // cout << "Age  :" << age << endl;
    // cout << "City :" << city << endl;
    // cout << "Country :" << country << endl;
    // cout << "Monthly Salary :" << monthSalary << endl;
    // cout << "Yearly Salary :" << yearSalary << endl;
    // cout << "Gender :" << gender << endl;
    // cout << "Married :" << yearOfMarriege << endl;
    // cout << "**********************************" << endl;

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

    float loanAmount, numOfMonths;
    cout << "Please enter Loan Amounts   : \n ";
    cin >> loanAmount;
    cout << "Please enter  num of months   : \n ";
    cin >> numOfMonths;

    float loanPerMonth = loanAmount / numOfMonths;
    cout << "Loan Per Month : " << loanPerMonth << endl;
}