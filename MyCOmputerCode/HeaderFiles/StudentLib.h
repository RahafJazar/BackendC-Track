#pragma once

#include <iostream>
#include <string>
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
    cin >> studnetInfo.name;
    cout << "Enter Your Age :" << endl;
    cin >> studnetInfo.age;
    cout << "Enter Your Major :" << endl;
    cin >> studnetInfo.major;
  }

  stStudent BestStudent(stStudent st1, stStudent st2)
  {
    return (st1.age > st2.age) ? st1 : st2;
  }
}
