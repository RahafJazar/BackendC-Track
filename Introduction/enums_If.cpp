#include <iostream>
using namespace std;

enum enScreenColor
{
    Red = 1,
    Blue = 2,
    Green = 3,
    Yellow = 4
};

enum enCountryChoice
{
    Jordan = 1,
    Tunisa,
    Algeria,
    Oman,
    Egypt,
    Iraq,
    Other
};

void showColorsCode()
{
    cout << "************************************" << "\n";
    cout << "Please chose the number of your color :" << "\n";
    cout << "(1) Red \n";
    cout << "(2) Blue \n";
    cout << "(3) Green \n";
    cout << "(4) Yellow \n";
    cout << "************************************" << "\n";
    cout << "Your Choice ? " << "\n";
}

void showCountriesCodes()
{
    cout << "***********************************************\n";
    cout << "Enter number of your country \n ";
    cout << " Jordan = 1  \n";
    cout << " Tunisa = 2  \n";
    cout << " Algeria = 3  \n";
    cout << " Oman = 4  \n";
    cout << " Egypt = 5  \n";
    cout << " Iraq = 6  \n";
    cout << " Other = 7  \n";
    cout << "***********************************************\n";
}
int main()
{

    int c;
    enScreenColor Color;

    showColorsCode();
    cin >> c;
    Color = (enScreenColor)c;
    if (Color == enScreenColor::Red)
        system("color 4f");

    else if (Color == enScreenColor::Blue)
        system("color 1F");

    else if (Color == enScreenColor::Green)
        system("color 2F");

    else if (Color == enScreenColor::Yellow)
        system("color 6F");

    cout << "______________________________________________\n"
         << flush;
    int countryCode;
    enCountryChoice country;

    showCountriesCodes();
    cin >> countryCode;
    country = (enCountryChoice)countryCode;

    if (country == enCountryChoice::Jordan)
    {
        cout << "The  country is  : Jordan";
    }
    else if (country == enCountryChoice::Tunisa)
        cout << "The country is : Tunisia";
    else if (country == enCountryChoice::Algeria)
        cout << "The country is : Algeria";
    else if (country == enCountryChoice::Oman)
        cout << "The country is : Oman";
    else if (country == enCountryChoice::Egypt)
        cout << "The country is : Egypt";
    else if (country == enCountryChoice::Iraq)
        cout << "The country is : Iraq";
    else if (country == enCountryChoice::Other)
        cout << "The country is  another one ";
}