//============================================================================
// Name        : inheritance.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal{
public:
	void speak(){
		cout << "Grrrr.." << endl;
	}
};

class Cat : public Animal { //Cat - sub class and Animal - Super class
public:
	void jump(){
		cout << "Jumping.. " << endl;
	}
};

class Tiger : public Cat{
public:
	void attack(){
		cout << "Attacking..." << endl;
	}
};

int main() {

	Animal a;
	Cat b;
	Tiger c;
	a.speak();
	b.speak(); //inherited method from parent
	c.speak(); //inherited from Cat class --> cat class inherits from Animal
	b.jump(); //method in child class
	c.jump(); //method inherited from Cat
	c.attack(); //method in Tiger class
	return 0;
}
