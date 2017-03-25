/*
 * Person.cpp
 *
 *  Created on: Mar 12, 2017
 *      Author: lthomas
 */

#include "Person.h"

Person::Person() {
	name = "Liju";
}

string Person::toString(){
	return "Person name is :" + name;
}

void Person::setName(string newName){
	name = newName;
}

string Person::getName(){
	return name;
}
