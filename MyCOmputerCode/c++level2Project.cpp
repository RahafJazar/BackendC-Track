#include <iostream>
#include <fstream>
#include <vector>
#include<string>
#include "HeaderFiles/StudentManagementLib.h"

using namespace std;

int main()
{
    string filePath = "D:/BackendC-Track/MyCOmputerCode/Files/studentfile.txt";
    vector<StudentManagementLib::stStudent> students;
    StudentManagementLib::LoadFromFile(students, filePath);
    StudentManagementLib::AddStudent(students);
    StudentManagementLib::DisplayStudents(students);
    StudentManagementLib::SaveToFile(students, filePath);
}