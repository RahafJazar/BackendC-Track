// C++Level2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma warning(disable:4996)
#include <iostream>
#include<vector>
#include <string>
#include <cctype>
#include <fstream>
#include<ctime>
#include "MyLib.h"

struct stEmployee {
    string Name;
    int Age; 
    float Salary;
};


void printFileContent(string filename) {
    fstream Myfile;
    Myfile.open(filename, ios::in); //read mode

    if (Myfile.is_open())
    {
        string line;
        while (getline(Myfile, line))
        {
            cout << line << endl;

        }
        Myfile.close();
    }
   
}

void loadDataFromFileToVector(string fileName, vector<string>& vFileVector) {
    fstream MyFile;
    MyFile.open(fileName, ios::in);
    if (MyFile.is_open()) {
        string line;
        while (getline(MyFile, line)) {
            vFileVector.push_back(line);
        }
        MyFile.close();
    }
}
void safeVectorToFile(string fileName, vector<string> vFileVector) {
    fstream MyFile;
    MyFile.open(fileName, ios::out);
    if (MyFile.is_open()) {
        MyFile.clear();
        for (string &line : vFileVector) {
            if (line != "") {
                MyFile << line << "\n";
            }
           


        }
    }
    MyFile.close();
}

void deleteRecordFromFile(string fileName, string record) {
    vector <string>  vFileContent;

    loadDataFromFileToVector(fileName, vFileContent);
    for (string line : vFileContent) {
        if ( line== record)
        {
            line = "";
        }
    }

    safeVectorToFile(fileName, vFileContent);

}

void UpdateRecordFromFile(string fileName, string record, string updateTo) {
    vector <string>  vFileContent;

    loadDataFromFileToVector(fileName, vFileContent);
    for (string &line : vFileContent) {
        if (line == record)
        {
            line = updateTo ;
        }
    }

    safeVectorToFile(fileName, vFileContent);
}




//int main()
//{
// //   std::cout << "Hello World!\n";
// //   myLib1::Test();
// //   
// //   vector <int>  vNumbers;
// //   vNumbers.push_back(20);
// //   vNumbers.push_back(30);
// //   vNumbers.push_back(50);
// //   
// //   cout << "First Element : "<<vNumbers.front() << endl;
// //   cout << "Last Element: "<<vNumbers.back() << endl;
// //   cout << "\n--------------------- \n";
// //   for (int n : vNumbers) {
// //       cout << n << ",";
// //       
// // }
//
// //   cout << endl;
// //   //returns the number of elements present in the vector
// //   cout << "Size: "<<vNumbers.size() << endl;
//
// //   //check the overall size of vector  
// //   cout << "Capacity : " << vNumbers.capacity() << endl;
//
// //   cout << "Is Empty : " << vNumbers.empty() << endl;
// //   //clear all numbers  of vector 
// //   vNumbers.clear();
//
// //   if (!vNumbers.empty()) { //عشان ما يضرب اكسيبشن 
// //       cout << "First Element : " << vNumbers.front() << endl;
// //       cout << "Last Element: " << vNumbers.back() << endl;
// //   }
// // 
// //   //returns the number of elements present in the vector
// //   cout << "Size: " << vNumbers.size() << endl;
//
// //   //check the overall size of vector  
// //   cout << "Capacity : " << vNumbers.capacity() << endl;
//
// //   //check if vector has element 
// //   cout << "Is Empty : "<<vNumbers.empty() << endl;  //1:true , 0:false 
// //       
//
// //   //create a  reference 
// //   int a = 10;
// //   int&  x = a;
// //   cout <<"address of a : "<< & a << endl;
// //   cout <<"address of x : "<< & x << endl;
// //   cout <<"value of a : "<<  a << endl;
// //   cout <<"value of x : "<<  x << endl;
//
// //   a = 50;
// //   cout << "value of a : " << a << endl;
// //   cout << "value of x : " << x << endl;
//
//
// //   //pointers => full accesss on memory 
// //   int c = 30;
// //   cout << "c value : " << c << endl;
// //   cout << "c address : " << &c << endl;
// //   int* p = &c; //هو فاريبل بتخزن فيه عنوان اخر 
// //   cout << "Pointer value :" << p << endl;
//
// //   *p = 60;
// //   cout << "c value : " << c << endl;
// //   cout << "Pointer Drefrencing :" << *p << endl;
//
//
// //   //difference between reference and  pointer
// //   bool u = true;
// //   bool* p_ = &u;
// //   cout << "u value : " << &u << endl; 
// //   cout << "u address : " << u << endl;
//
// //   cout << "p address :" << p_ << endl;
// //   cout << "p_ value : " << *p_ << endl;
//
// //   int d = 40;
// //   int& b = d;
// //   int y = 23;
// //   int* p1 = &d;
// //   cout << "b value :" << b << endl;
// //   cout << "y value :" << y << endl;
// //   cout << "d value :" << d << endl;
// //   cout << "Pointer value: " << p1 << endl;
// //   cout << "y address :" << &y<< endl;
// //   cout << "d address :" << &d << endl;
// //   cout << "b address :" << &b << endl;
// //   cout << " pointer dereferencing  " << *p1 << endl;
//
// //
// //   p1 = &y;
// //   cout << "after assigning ::" << endl;
// //   cout << "b value :" << b << endl;
// //   cout << "y value :" << y << endl;
// //   cout << "d value :" << d << endl;
// //   cout << "y address :" << &y << endl;
// //   cout << "d address :" << &d << endl;
// //   cout << "b address :" << &b << endl;
// //   cout << "Pointer value: " << p1 << endl;
// //   cout << " pointer dereferencing  " << *p1 << endl;
//
//
//
// //   int n1 = 10, n2 = 30;
//
// //   cout << "Before swapping \n";
// //   cout << "n1 = " << n1 << endl;
// //   cout << "n2 = " << n2<<endl;
//
//
// //   myLib1::swapusingReference(n1, n2);
// //   cout << "\nAfter swapping by reference  \n"; 
// //   cout << "n1 = " << n1 << endl;
// //   cout << "n2 = " << n2 << endl;
//
// //    
// //   int s1 = 5, s2 = 3;
// //   cout << "Before swapping by pointers\n";
// //   cout << "s1 = " << s1 << endl;
// //   cout << "s2 = " << s2 << endl;
//
// //   myLib1::swapusingPointers(&s1, &s2);
// //   cout << "\nAfter swapping by pointers  \n";
// //   cout << "s1 = " << s1 << endl;
// //   cout << "s2 = " << s2 << endl;
//
// //   int arr[3] = { 1,2,4 };
// //   cout << &arr[0] << endl;
// //   cout << &arr[1] << endl;
// //   cout << &arr[2] << endl;
// //   int* ptr;
// //   ptr = arr;
// //   cout << "\n\n";
// //   for (int i = 0; i < 3; i++) {
// //       cout << ptr + i << endl;
// //       
// //   }
// //
// //   for (int i = 0; i < 3; i++) {
// //       cout <<*( ptr + i) << endl;
// //       
// //   }
//
// //   //pointers with struct
// //   stEmployee emp1, * ptr2;
// //   emp1.Name = "Rahfa jazar";
// //   emp1.Salary = 1700.6;
//
// //   cout << emp1.Name << endl;
// //   cout << emp1.Salary << endl;
//
// //   ptr2 = &emp1;
// //   cout <<  ptr2->Name<< endl;
// //   cout << ptr2->Salary << endl;
//
// //   void* ptr3;
// //   float o = 54;
// //   ptr3 = &o;
// //   
// //   cout << * (static_cast<float*> (ptr3));
//
// //   //Dynamic memory allocation
// //   //1-create an int  pointers 
// //   int* pointer1;
//
// //   //2-create a flat pointers
// //   float* pointer2;
// //   
// //   //3-dynamically allocate memory
// //   pointer1 = new int;
// //   pointer2 = new float;
//
// //   //4-assigning value to memory
// //   *pointer1 = 5;
// //   *pointer2 = 86.34;
//
// //   //print vaues
// //   cout << "value of pointer1 : " << pointer1 << endl;
// //   cout << "value of pointer2 : " << pointer2 << endl;
//
// //   //printer referencing value
// //   cout << "pointer1 : " << *pointer1 << endl;
// //   cout << "pointer2 : " << *pointer2 << endl;
// //  
// //   //dellocate the memory
// //   delete pointer1;
// //   delete pointer2;
//
// //  /* //dynamic array
// //
// //   int length;
// //   cout << "Enter total number of students \n";
// //   cin >> length;
// //   int * pointer3;
// //   pointer3 = new int[length];
// //   cout << "Enter grades of students \n";
// //   for (int i = 0; i < length; i++) {
// //       cout << "student " << i+1 << " : ";
// //       cin >> *(ptr + i);
// //  
// //       
// //   }
// //   //displaying grades
// //   cout << "Displaying grades" << endl;
// //   for (int i = 0; i < length; i++) {
// //       cout << "student " << i + 1 << " : ";
// //       cout << *(ptr + i) << endl;
// //   }
//
// //   delete[] pointer3; */
// // 
//
// //   //vector 
// //   vector<int> num = { 2,4,68,3 };
// //   cout << "Vector element at index 0 :" << num.at(0) << endl;
// //   printf("vector element at index 0 :%2d \n", num[0]);
// //   
//
// //   for (const int & i : num) {
// //       cout << i << endl;
// //
// //   }
// //   for ( int & i : num) {
// //       i = 20;
// //       cout << i << endl;
// //   }
//
//
// //   
// //   cout<<"\nvector iterator \n";
// //   vector<int>::iterator iter;
//
// //   //use iterator with forloop
// //   for (iter = num.begin(); iter != num.end(); iter++) {
// //       cout << *iter << endl;
// //   }
//
//
// //   //string object 
// //   string string1 = "My name is Rahaf Jazar , I Love Programming ";
// //   //print the length of the string 
// //   cout << string1.length()<< endl;
//
// //   //print second character of the string 
// //   cout << string1.at(1) << endl;
//
// //   //append string to string 
// //   string1.append("I graduated from university of jordan");
// //   cout << string1 << endl;
//
// //   //insert ali to position 22
// //   string1.insert(22, "Ali");
// //   cout << string1 << endl;
//
// //   //print all next 8 letters of position 9 
// // 
// //  cout << string1.substr(9, 8) << endl;
// //   //add one character to the end of the string
// //   string1.push_back('H');
// //   cout << string1 << endl;
//
// //   //remove last chararacter of the string
// //   string1.pop_back();
// //   cout << string1 <<endl;
//
// //   //find Rahaf in the string 
// //   cout << string1.find("Rahaf") << endl;
//
// //   //find rahaf in the string 
// //   cout << string1.find("rahaf") << endl;
//
// //   if (string1.find("rahaf") == string1.npos) {
// //       cout << "rahaf is not foundd" << endl;
// //   }
// //   string1.clear();
// //   cout << string1 << endl;
//
// //   //cctype functions
// //   char e1, k1;
// //   e1 = toupper('a');
// //   k1 = tolower('A');
// //   cout << "converting  a to A :" << e1 << endl;
// //   cout << "converting A to a :" << k1 << endl;
//
// //   //Upper(AtoZ)    
// //   //Return 0 if not ,else return a number >=1
// //   cout <<"is Upper('A') :"<< isupper('A') << endl;
//
// //   //Lower(a to z)
// //   //Return 0 if not , else return number >=1
// //   cout <<"islower('a') :"<< islower('a') << endl;
//
//
// //   //Digit(0 to 9)
// //   cout << " isdigit('9') :"<<isdigit('9') << endl;
//
// //   //Punctuation characters are !"
// //   cout << "isPunct(';') :" << ispunct(';') << endl;
// //   cout << "isPunct(';') :" << ispunct('i') << endl;
//
//
// //   /* write to file using write mode */
// //   fstream MyFile;
// //   MyFile.open("myfile.txt", ios::out); //write mode 
// //   if (MyFile.is_open()) {
// //       MyFile << "Hi ,  this is first line 22wd2\n";
// //       MyFile << "Hi , this is second line  5555\n";
// //       MyFile.close();
// //   }
// //       
// //   MyFile.open("myfile.txt", ios::app);
// //   if (MyFile.is_open()) {
// //       MyFile << "Hi ,  this is first 3rd line \n"; 
// //       MyFile.close();
// //   }
//
// //   printFileContent("myfile.txt");
//
// //   vector<string> vContent;
// //   loadDataFromFileToVector("myfile.txt", vContent);
// //   cout << "loadDataFromFileToVector : \n";
// //   for (string i : vContent) {
// //       cout << i << "endl";
// //   }
//
// //   vector<string> vContent2 = {
// //       "hala","sami" ,"ghida"
// //   };
//
// //   safeVectorToFile("myfile.txt", vContent2);
//
//cout << "File content before delete \n";
//printFileContent("myfile.txt");
//
//UpdateRecordFromFile("myfile.txt", "Ali" ,"Omar");
//
//cout << "File content After update \n";
//printFileContent("myfile.txt");
//
//
////datetime (UTC and Local)
//time_t t = time(0);
//
//char* dt = ctime(&t);
//cout << "Local Date and time is :" << dt << endl;
//
//tm* gmtm = gmtime(&t);
//dt = asctime(gmtm);
//cout << "UTC date and time is : " << dt << endl;
//
//tm* now = localtime(&t);
//cout << "year :" << now->tm_year + 1900 << endl;
//cout << "month : " << now->tm_mon + 1 << endl;
//cout << "day:" << now->tm_mday << endl;
//cout << "hour :" << now->tm_hour << endl;
//cout << "minutes :" << now->tm_min << endl;
//cout << "secinds :" << now->tm_sec << endl;
//cout << "Week Day (Days since Sunday  ) : " << now->tm_wday << endl;
//cout << "Year Day (days since january 1st) :" << now->tm_yday << endl;
//cout << "hour of daylight savings time :" << now->tm_isdst << endl;
//}

 