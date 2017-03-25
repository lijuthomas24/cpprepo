/*
 * Cat.cpp
 *
 *  Created on: Mar 11, 2017
 *      Author: lthomas
 */
#include <iostream>
#include "Cat.h"

using namespace std;

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

