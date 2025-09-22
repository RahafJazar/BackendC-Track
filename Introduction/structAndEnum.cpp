#include <iostream>
using namespace std;
struct Course
{
    string coursename;
    string courseId;
    float courseAvg;
};
struct Student
{
    string name;
    short age;
    short rollNumbet;
    Course course;
    void printFullInfo()
    {
        cout << name << "," << age << "," << course.coursename << "\n";
    }
};
enum Color
{
    Green,
    Blue,
    White,
    Red
};

enum Direction
{
    North,
    South,
    East,
    West
};

enum Week
{
    Sunday = 21,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
};

enum Gender
{
    Male,
    Female,
    Other
};
enum Status
{
    Single,
    Married

};

int main()
{
    // student management system using structure (user defined )
    Student s1;
    s1.age = 34;
    s1.name = "Rahaf";
    s1.course.coursename = "Math";
    s1.course.courseId = "423423423423";
    s1.course.courseAvg = 23.4;
    s1.printFullInfo();

    // Enum
    /*-----Declarration------------*/
    Color myColor;
    myColor = Color ::Blue;
    cout << "Color is : " << myColor << "\n";
    Direction direction;
    Week week;
    Gender gender;
    Status status;

    /*-----Declarration------------*/

    direction = Direction::North;
    cout << "Direction is " << direction << "\n";

    week = Week::Monday;
    cout << "Week day is " << week << "\n";
}
