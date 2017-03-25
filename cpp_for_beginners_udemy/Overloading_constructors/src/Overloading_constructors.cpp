//============================================================================
// Name        : Overloading_constructors.cpp
// Author      : Liju
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
using namespace std;

int main() {

	Person person1;
	Person person2("Liju",25);
	Person person3("Thomas");
	cout << person1.toString()<< endl;
	cout << person2.toString()<< endl;
	cout << person3.toString()<< endl;

	return 0;
}
