
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

//Inefficient code if compiler optimisation is not done
/*
Animal createAnimal() {
	Animal a; //constructor called
	a.setName("Buddy");
	return a; //c++ creates temp object just to return this object //copy constructor called
}
*/

/*
//Other way:
Animal& createAnimal(){
	Animal a;
	a.setName("Buddy");
	return a;
} //here destructor is called for 'a', a has scope only here and if
  //we have Animal &frog = createAnimal(); frog is referencing to object which is
  //is not available;
*/

Animal* createAnimal(){
	Animal *pAnimal = new Animal();
	pAnimal->setName("Buddy");
	return pAnimal;
}

int main() {

   // Animal &frog = createAnimal(); //again here copy constructor called
    Animal *pFrog = createAnimal();
	pFrog->speak();

	delete pFrog; //since createAnimal uses new operator, and pFrog contains address
				  //of Animal object created, we can use pFrog to delete the object
	return 0;
}//destructor called
