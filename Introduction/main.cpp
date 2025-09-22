#include <iostream>
#include <cmath>
using namespace std;
int main()
{
     cout << "Rahaf Jazar" << " aya" << std::endl
          << std::endl;
     cout << "Mohammed" << "safi " << std::endl;

     cout << 3 + 5 << std::endl;

     // Homework1
     cout << "***********************************\n";
     cout << "Name :Rahaf Bassam Jazar\n";
     cout << "Age: 44 Years\n";
     cout << "City:Ammam\n";
     cout << "Country:Jordan" << std::endl;
     cout << "**********************************\n";

     //_________________________________________________

     cout << "\n\n****************************\n";
     cout << "****************************\n";
     cout << "****************************\n\n\n";

     //__________________________________________________
     cout << "I Love Programming\n\n";
     cout << "I Promise to be the best developer ever\n\n";
     cout << "I know it will take some time to practice, but i will achieve my goal" << std::endl
          << std::endl;
     cout << "Best Regards,\nRahaf Jazar\n";

     //__________________________________________________
     cout << "*   *" << std::endl;
     cout << "*   *" << std::endl;
     cout << "*****" << std::endl;
     cout << "*   *" << std::endl;
     cout << "*   *" << std::endl;

     // Homework2

     cout << "\a \n";
     //_______________________________________________
     cout << "Dear Sir \\Madam\n\n";
     cout << "How are You ? \n\n";
     cout << "My name is \"Mohammed\" ,nice to meet you .\n\n";

     //______________________________________________
     cout << "Ali\tAhmed\tLina\n";
     cout << "Fadi\tZain\tMona\n";

     // Variables
     int myAge = 24;
     cout << myAge << endl;
     cout << "I am " << myAge << "years old\n";

     char char1 = 'A', char2 = 'B';
     cout << char1 << char2 << " Reversed is " << char2 << char1 << endl;

     int age = 10;
     const int myNum = 50;

     // increment and decrement
     int a = 10, b = 20;
     a++;
     b++;

     cout << "A = " << a << endl;
     cout << "B = " << b << endl;

     // Math
     double x = 64;
     cout << "square of " << x << "is " << sqrt(x) << "\n";
     x += x;
     cout << "square of " << x << "is " << sqrt(x) << "\n";

     cout << "round of " << 2.7 << "is " << round(2.7) << "\n";
     cout << "round of " << 2.5 << "is " << round(2.5) << "\n";
     cout << "round of " << 2.32 << "is " << round(2.32) << "\n";
     cout << "round of " << "sqrt ( " << x << " ) is  :" << round(sqrt(x)) << "\n";

     cout << " 4 power 4  is : " << pow(4, 4) << "\n";
     cout << " ceil of 2.8  is : " << ceil(2.8) << "\n";
     cout << "ceil of 2.1 is : " << ceil(2.1) << "\n";
     cout << "floor of 2.1 is : " << floor(2.1) << "\n";
     cout << "floor of 2.8 is : " << floor(2.8) << "\n";
     cout << "floor of -2.8 is : " << floor(-2.8) << "\n";
     cout << "ceil of -2.8 is : " << ceil(-2.8) << "\n";

     cout << "abs  of -2.8 is : " << abs(-2.8) << "\n";
     cout << "abs of 2.8 is : " << abs(2.8) << "\n";

     // convert  double to int
     int num1;
     double num2 = 39.99;

     num1 = num2;      // implicit casting ;
     num1 = (int)num2; // explicit coversion
     num1 = int(num2); // explicit converion (function)
     cout << num1 << endl;

     string str = "123.457966456546546883";

     // convert string to double
     double num_double = stod(str);
     // convert string to int
     int num_int = stoi(str);
     // convert string to float
     float num_float = stof(str);

     cout << num_double << "\n";

     cout << num_int << "\n";
     cout << num_float << endl;

     // double to string
     string st1, st2;
     st1 = to_string(num_int);
     st2 = to_string(num_double);
     cout << st1 << "\n";
     cout << st2 << endl;

     // HW Type conversion
     string str1 = "43.22";
     int N1 = 20;
     double N2 = 33.5;
     float N3 = 55.33;

     // str ==> double ,float ,int
     cout << stod(str1) << "\n";
     cout << stof(str1) << "\n";
     cout << stoi(str1) << endl;
     // int -->string
     cout << to_string(N1) << "\n";
     // double -->string
     cout << to_string(N2) << "\n";
     // float -->string,int
     cout << to_string(N3) << "\n";
     cout << int(N3) << endl;
     cout << (int)N3 << endl;

     
}
