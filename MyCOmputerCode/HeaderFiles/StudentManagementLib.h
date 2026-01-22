#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <string>
#include <ctime>
#include <filesystem>
using namespace std;
namespace fs = std::filesystem;
namespace StudentManagementLib
{
    struct stStudent
    {
        /* data */
        int id;
        string name;
        int age;
        time_t createdAt; // وقت الاضافة
    };
    void AddStudent(vector<stStudent> &students)
    {
        stStudent st;
        cout << setw(10) << "Enter ID : ";
        cin >> st.id;
        cout << setw(10) << "Enter Name : ";
        getline(cin >> ws, st.name);
        cout << setw(10) << "Enter age : ";
        cin >> st.age;
        st.createdAt = time(0);
        students.push_back(st);
    }
    void DisplayStudents(const vector<stStudent> &students)
    {
        for (const stStudent &s : students)
        {
            cout << "ID : " << s.id << endl;
            cout << "Name: " << s.name << endl;
            cout << "Age: " << s.age << endl;
            cout << "Created At : " << ctime(&s.createdAt) << endl;
            cout << "------------------------------------------\n";
        }
    }

    int FindStudentIndexByID(const vector<stStudent> &students, int id)
    {
        int index;
        for (int i = 0; i < students.size(); i++)
        {
            if (students[i].id == id)
            {
                index = i;
                return index;
            }
        }

        return -1; // مش موجود
    }

    void SaveToFile(const vector<stStudent> &students, string fileName)
    {
        fstream Myfile;
        Myfile.open(fileName, ios::out);
        if (!fs::exists(fileName))
        {
            cout << "File doesn't exist , it will be created . \n ";
        }

        if (Myfile.is_open())
        {
            for (const stStudent &st : students)
            {
                Myfile << st.id << "|"
                       << st.name << "|"
                       << st.age << "|"
                       << st.createdAt << endl;
            }
        }
        Myfile.close();
    }
    void LoadFromFile(vector<stStudent> &students, string fileName)
    {
        fstream Myfile;
        Myfile.open(fileName, ios::in);
        if (!fs::exists(fileName))
        {
            cout << "File doesn't exist , it will be created . \n ";
        }

        students.clear(); // نضمن ما يتكرر
        stStudent s;
        char seperator;
        if (Myfile.is_open())
        {
            string line;
            while (Myfile >> s.id >> seperator)
            {
                /* code */
                getline(Myfile, s.name, '|'); // لانه الاسم string وقد  يحتوي احرف فحطيننا getline
                Myfile >> s.age >> seperator >> s.createdAt;
                Myfile.ignore(); // ignore the end of line
                students.push_back(s);
            }
        }
        Myfile.close();
    }

}