
#include <iostream>
using namespace std;

class Animal {
private:
	string name;

public:
	Animal() {
		cout << "Animal created." << endl;
	}

	Animal(const Animal& other) :
			name(other.name) {
		cout << "Animal created by copying." << endl;
	}

	~Animal() {
		cout << "Destructor called" << endl;
	}

	void setName(string name) {
		this->name = name;
	}

	void speak() const {
		cout << "My name is: " << name << endl;
	}
};


int main() {

	//Animal cat;
	//cat.setName("Freddy");
	//cat.speak();

	Animal *pcat1 = new Animal();

	//pcat1.setName("Buddy"); //cannot call methods using pointers, only through objects
	//pcat1.speak();

	//*pcat1.setName("Buddy"); //doesn't work as dot operator has higher
	//*pcat1.speak();			 //precedence than * operator

	//workAround:
	//(*pcat1).setName("Buddy");
	//(*pcat1).speak();

	//Arrow operator:
	pcat1->setName("Buddy");
	pcat1->speak();

	//here no destructor is called because using new operator should accompany
	//delete operator too

	delete pcat1; //this statement invokes destructor
	cout << "Sizeof(pcat1) = " << sizeof(pcat1) << endl;

	Animal *pcat2 = NULL; //best way to initialize;

	return 0;
}//destructor called
