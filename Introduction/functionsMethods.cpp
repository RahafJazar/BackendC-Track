#include <iostream>
#include <string>
#include <cmath>
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

// hw1
void sumofTwoNumbersPeocedure()
{
    short n1, n2;
    cout << "please enter num1" << "\n";
    cin >> n1;
    cout << "please enter mum2" << "\n";
    cin >> n2;
    cout << n1 + n2 << endl;
}

short sumofTwoNumbersFunction()
{
    short n1, n2;
    cout << "please enter num1" << "\n";
    cin >> n1;
    cout << "please enter mum2" << "\n";
    cin >> n2;
    return n1 + n2;
}

// hw2
short mySumWithParameters(short n1, short n2)
{
    return n1 + n2;
}

// hw3

// Student Management Projec
int totalStudents = 0;
enum Grade
{
    FAIL,
    PASSS,
    EXCELLENT
};
struct stStudent
{
    /* data */
    string name;
    int age;
    string subject;
    double mark;
    Grade grade;
};
// function to evaluate grade
Grade evaluateGrade(double mark)
{
    if (mark > 80)
        return EXCELLENT;
    else if (mark > 50)
        return PASSS;
    else
        return FAIL;
}
// function to display one student
void displayStudent(const stStudent &s)
{
    cout << "Name : " << s.name << ","
         << "Age: " << s.age << ","
         << "Subject" << s.subject
         << "Grade ";
    switch (s.grade)
    {
    case FAIL:
        /* code */
        cout << "FAIL " << endl;
        break;
    case PASSS:
        /* code */
        cout << "pASS " << endl;
        break;
    case EXCELLENT:
        /* code */
        cout << "EXCELLENT " << endl;
        break;

    default:
        break;
    }
}

// Ffunction createstudent
stStudent createStudent()
{
    stStudent s;
    cout << "Enter Your name";
    cin >> s.name;
    cout << "Enter your age";
    cin >> s.age;
    cout << "Enter marks: ";
    cin >> s.mark;

    double grade = evaluateGrade(s.mark);
    totalStudents++;
    return s;
}

int main()
{

    int n;
    cout << "How many students? ";
    cin >> n;

    stStudent students[100]; // array of struct

    // for loop to input students
    for (int i = 0; i < n; i++)
    {
        cout << "\n--- Enter Student " << i + 1 << " ---" << endl;
        students[i] = createStudent();
    }

    cout << "\n===== Student List =====\n";
    // for loop to display students
    for (int i = 0; i < n; i++)
    {
        displayStudent(students[i]);
    }

    cout << "\nTotal students added = " << totalStudents << endl;
    return 0;
}
