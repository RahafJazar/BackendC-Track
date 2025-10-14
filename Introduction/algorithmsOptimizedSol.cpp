#include <iostream>
#include <cmath>
using namespace std;
string ReadPinCode()
{
    string pin;

    cout << "\nEnter Pin Code\n"
         << endl;
    cin >> pin;

    return pin;
}

bool Login()
{
    string PinCode;
    int count = 3;
    do
    {
        count--;
        PinCode = ReadPinCode();
        if (PinCode == "1234")
        {
            return 1;
        }
        else
        {

            cout << "\nWrong PIN ,";
            cout << "You have" << count << " more  trials \n";
            system("color 4F"); // turn screen to red
        }
    } while (PinCode != "1234" && count >= 1);
}
int main()
{
    if (Login())
    {
        system("color 2F"); // turn screen to green
        cout << "\nYour Count Balance Is " << 7500 << endl;
    }
    else
    {
        cout << "\nYour Card blocked call the bank for help . \n";
    }
}
