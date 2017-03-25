//============================================================================
// Name        : namespaces.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"
#include "Animals.h"

using namespace std;

//only - using namespace lp; //output: Meowww!!!
//only - using namespace lpt; //output: ssssss

//using both
using namespace lp;
//using namespace lpt;

int main() {

	Cat cat;  //using both namespaces and not specifying which to use will
	cat.speak();  //lead to ambigous situation
				  //If only one namespace is used and if do not specify then it
	lp::Cat cat2; //considers the class specified by namespace
	cat2.speak();

	lpt::Cat cat3;
	cat3.speak();

	cout << catname << endl; //default namespace specified on top
	cout << lp::catname << endl;
	cout << lpt::catname << endl;
	return 0;
}
