//============================================================================
// Name        : const_keyword.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal{
private:
	string name;

public:
	Animal(){ cout << "Animal Created" << endl;} //only one animal created other
												//created using copy constructor
	Animal( const Animal& other){
		name = other.name;//speak() displays freddy
		cout << "Animal Created by copying" << endl;
	}

	//other way
//	Animal (const Animal& other): name(other.name)){};

	void setName(string name){
		this->name = name;
	}
	void speak() const {
			cout << "My name is: " << name << endl;
		}
};

int main() {

	Animal animal1;
	animal1.setName("Freddy");
	Animal animal2 = animal1; //implicitly creates a copy constructor
	animal2.speak(); //here animal2 is created using explicit copy constructor
					//hence name is not copied here (assumption no name=other.name statement.
	animal2.setName("Bob");

	animal1.speak();
	animal2.speak();

	Animal animal3(animal1); //other way of invoking copy constructor
	animal3.setName("Dog");
	animal3.speak();
	return 0;
}
