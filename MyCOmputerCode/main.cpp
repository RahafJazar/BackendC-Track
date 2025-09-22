#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    // cout << "Rahaf Jazar" << " aya" << std::endl
    //      << std::endl;
    // cout << "Mohammed" << "safi " << std::endl;

    // cout << 3 + 5 << std::endl;

    // // Homework1
    // cout << "***********************************\n";
    // cout << "Name :Rahaf Bassam Jazar\n";
    // cout << "Age: 44 Years\n";
    // cout << "City:Ammam\n";
    // cout << "Country:Jordan" << std::endl;
    // cout << "**********************************\n";

    // //_________________________________________________

    // cout << "\n\n****************************\n";
    // cout << "****************************\n";
    // cout << "****************************\n\n\n";

    // //__________________________________________________
    // cout << "I Love Programming\n\n";
    // cout << "I Promise to be the best developer ever\n\n";
    // cout << "I know it will take some time to practice, but i will achieve my goal" << std::endl
    //      << std::endl;
    // cout << "Best Regards,\nRahaf Jazar\n";

    // //__________________________________________________
    // cout << "*   *" << std::endl;
    // cout << "*   *" << std::endl;
    // cout << "*****" << std::endl;
    // cout << "*   *" << std::endl;
    // cout << "*   *" << std::endl;

    // // Homework2

    // cout << "\a \n";
    // //_______________________________________________
    // cout << "Dear Sir \\Madam\n\n";
    // cout << "How are You ? \n\n";
    // cout << "My name is \"Mohammed\" ,nice to meet you .\n\n";

    // //______________________________________________
    // cout << "Ali\tAhmed\tLina\n";
    // cout << "Fadi\tZain\tMona\n";

    struct Salary
    {
        string MonthlySalary;
        string YearlySalary;
    };
    struct RelationsInfo
    {
        bool isMarried;
    };

    struct ContactInfo
    {
        string PhoneNumber;
        string MobileNumber;
        string Email;
    };
    struct Address
    {
        string City;
        string Country;
        ContactInfo Contact;
    };
    struct Employee
    {
        string Name;
        short Age;
        char Gender;
        Address Address;
        RelationsInfo RelationInfo;
    };

    Employee emp1, emp2;
    emp1.Name = "Suad";
    emp1.Age = 33;
    emp1.Gender = 'F';
    emp1.Address.Country = "Jordan";
    cout << "Please  enter your city" << endl;
    cin >> emp1.Address.City;
    cout << "Please  enter your phone number" << endl;
    cin >> emp1.Address.Contact.PhoneNumber;
    cout << "Please  enter your mobile number" << endl;
    cin >> emp1.Address.Contact.MobileNumber;

    cout << "Employee 1  Name : " << emp1.Name << "\n";
    cout << "Employee 1  Age : " << emp1.Age << "\n";
    cout << "Employee 1  Gender : " << emp1.Gender << "\n";
    cout << "Employee 1  Country : " << emp1.Address.Country << "\n";
    cout << "Employee 1  Phone : " << emp1.Address.Contact.PhoneNumber << "\n";
    cout << "Employee 1  Mobile : " << emp1.Address.Contact.MobileNumber << "\n";
}