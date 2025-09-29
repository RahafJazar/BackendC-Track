#include <iostream>
using namespace std;

void readArrayData(int x[3])
{
    cout << "Enter number1 ?" << "\n";
    cin >> x[0];
    cout << "Enter number2  ? " << "\n";
    cin >> x[1];
    cout << "Enter number3  ? " << "\n";
    cin >> x[2];
}

void printArrayData(int x[3])
{
}

void readGrades(float grades[3])
{
    cout << "Enter Grade1 ?" << "\n";
    cin >> grades[0];
    cout << "Enter Grade 2 ? " << "\n";
    cin >> grades[1];
    cout << "Enter Grade 3  ? " << "\n";
    cin >> grades[2];
}
template <size_t N>
float averageGrades(float (&grades)[N])
{
    float sum = 0;
    int length = sizeof(grades) / sizeof(grades[0]);
    for (int i = 0; i < N; i++)
    {
        /* code */
        sum += grades[i];
    }
    float avg = sum / N;
    return avg;
}

struct strInfo
{
    /* data */
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};

void readInfo(strInfo &info)
{
    cout << "Enter Your first name" << "\n";
    getline(cin, info.FirstName);
    cout << "Enter Your last name" << "\n";
    getline(cin, info.LastName);
    cout << "Enter Your  age" << "\n";
    cin >> info.Age;
    cin.ignore(1, '\n');
    cout << "Enter  Your phone " << "\n";
    cin >> info.Phone;
    cin.ignore(1, '\n');
}
void readInfos(strInfo info[2])
{
    for (int i = 0; i < 2; i++)
    {
        readInfo(info[i]);
    }
}

void printInfo(strInfo &info)
{
    cout << "***************************************" << endl;
    cout << "First Name : " << info.FirstName << "\n";
    cout << "Last Name: " << info.LastName << "\n";
    cout << "Age :" << info.Age << "\n";
    cout << "Phone : " << info.Phone << "\n";
    // cout << "Gender  : " << enGender << "\n";
    cout << "***************************************" << endl;
}
void printInfos(strInfo info[2])
{
    for (int i = 0; i < 2; i++)
    {
        printInfo(info[i]);
    }
}

int main()
{
    // float grades[3];
    // readGrades(grades);
    // cout << "***************************************" << "\n";
    // float avg = averageGrades(grades);
    // cout << "The average of grades is " << avg;

    strInfo Persons[2]; // array of struct
    Persons[0].FirstName = "Rahaf";
    Persons[0].LastName = "Jazar";
    readInfos(Persons);
    printInfos(Persons);

    // int x[3];
    // readArrayData( x);
    // printArrayData(x);
}