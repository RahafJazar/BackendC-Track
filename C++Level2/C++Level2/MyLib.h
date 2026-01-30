#pragma once
#include<iostream>
using namespace std;
namespace myLib1 {

	void Test() {
		cout << "Hi this is my first function in first library \n";
	}
 
	void swapusingReference(int& b, int& c) {
		int temp;
		temp= b;
		b = c;
		c = temp;
	}

	void swapusingPointers(int* n1, int* n2) {
		cout << "n1 : " << n1 << endl;
		int  temp =   *n1;
		cout << temp << endl;
		*n1 = *n2;
		cout << "n1 : " << n1 << endl;
		*n2 = temp;
		cout << "n2 : " << n2 << endl;
	}
}