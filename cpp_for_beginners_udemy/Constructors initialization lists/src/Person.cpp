/*
 * Person.cpp
 *
 *  Created on: 16-Mar-2017
 *      Author: liju
 */

#include "Person.h"
#include <sstream>

//Person::Person(){ //non parameterised constructors
//	age = 0;
//	name ="";
//}

Person::Person():name("unnamed"),age(0){

}

//Person::Person(string name, int age){ //parameterised constructors
//	this->name = name;
//	this->age = age;
//}

Person::Person(string name, int age): name(name),age(age){

}

string Person::toString(){

	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; age: ";
	ss << age;

	return ss.str();
}
