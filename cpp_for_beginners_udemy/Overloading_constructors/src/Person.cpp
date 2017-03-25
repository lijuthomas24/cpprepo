/*
 * Person.cpp
 *
 *  Created on: Mar 13, 2017
 *      Author: lthomas
 */
#include <sstream>
#include "Person.h"

Person::Person() {
	name = "undefined";
	age = 0;
}

string Person::toString(){
		stringstream ss;

		ss <<"Name : ";
		ss << name;
		ss << "; Age : ";
		ss << age;

		return ss.str();
}

