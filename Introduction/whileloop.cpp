#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string readPinCode()
{
    string pin;
    cout << "enter PIN Code , 1234 get balance?" << "\n";
    getline(cin, pin);
    return pin;
}
string validatePIN(string &pinCode)
{
    string balance = "7500";
    while (pinCode != "1234")
    {
        /* code */
        pinCode = readPinCode();
    }

    return "Your Balance is : " + balance;
}
int main()
{
    string pin = readPinCode();
    cout << validatePIN(pin) << endl;
}
