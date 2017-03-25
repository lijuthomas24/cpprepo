/*
 * Person.cpp
 *
 *  Created on: 16-Mar-2017
 *      Author: liju
 */

#include "Person.h"
#include <sstream>

Person::Person(){
	age = 0;
	name ="";
}

Person::Person(string name, int age){
	this->name = name;
	this->age = age;

	cout <<"Memory Location: " << this << endl;
}

string Person::toString(){

	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; age: ";
	ss << age;

	return ss.str();
}
