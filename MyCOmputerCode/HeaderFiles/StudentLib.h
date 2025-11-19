#pragma once

#include <iostream>
#include <string>
#include <limits>
using namespace std;

namespace StudentLib
{

  struct stStudent
  {
    string name;
    int age;
    string major;
  };

  void PrintStudent(stStudent studentInfo)
  {

    cout << "Student name : " << studentInfo.name << endl;
    cout << "Student age : " << studentInfo.age << endl;
    cout << "Student major : " << studentInfo.major << endl;
  }

  stStudent ReadStudent()
  {
    stStudent studnetInfo;
    cout << "Enter Your Name :" << endl;

    getline(cin, studnetInfo.name);
    cout << "Enter Your Age :" << endl;
    cin >> studnetInfo.age;
     cin.ignore();
    cout << "Enter Your Major :" << endl;
   
    getline(cin, studnetInfo.major);
    return studnetInfo;
  }

  stStudent BestStudent(stStudent st1, stStudent st2)
  {
    return (st1.age > st2.age) ? st1 : st2;
  }
}
