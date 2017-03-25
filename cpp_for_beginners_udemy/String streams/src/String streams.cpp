//============================================================================
// Name        : String.cpp
// Author      : Liju
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
using namespace std;

int main() {

	string name = "Bob";
	int age = 32;

	//string info = "Name : " + name + "; Age :" + age;
	//Error:
//	no match for 'operator+' (operand types are 'std::basic_string<char>' and 'int')

	//cout << info << endl;

	stringstream ss;

	ss << "Name is : ";
	ss << name;
	ss << ";\nAge is : ";
	ss << age;


	cout << ss.str() << endl;

	string info = ss.str();

	cout << info << endl;
	return 0;
}
