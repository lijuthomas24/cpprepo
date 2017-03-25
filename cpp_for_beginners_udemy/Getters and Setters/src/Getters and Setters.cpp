//============================================================================
// Name        : Getters.cpp
// Author      : Liju
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
using namespace std;

int main() {

	Person person;
	person.setName("Liju Thomas");
	cout << person.toString() << endl; // prints !!!Getters and Setters!!!
	cout<< "final : "+ person.getName() << endl;
	return 0;
}
