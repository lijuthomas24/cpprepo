/*
 * Cat.cpp
 *
 *  Created on: Mar 11, 2017
 *      Author: lthomas
 */
#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat(){
	cout << "Cat created..";
		happy = true;
	}
Cat::~Cat(){
	cout << "Cat Destroyed ...\n";
}

void Cat::speak(){
	if(happy){
    cout << "Meowwwwww!!!" << endl;
	}
	else{
		cout << "No Meowwww!!" << endl;
	}
}

void Cat::makeHappy(){
	happy = true;
}
void Cat::makeSad(){
	happy = false;
}

