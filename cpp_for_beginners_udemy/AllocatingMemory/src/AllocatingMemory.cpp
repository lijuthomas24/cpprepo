
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


int main(){

/*	int *ptr = new int;

	*ptr = 8;
	cout << *ptr << endl;
	delete ptr; */


	Animal *pAnimal = new Animal();

	Animal *pArray = new Animal[10];

	pArray[5].setName("George");
	pArray[5].speak();

	delete [] pArray;
	delete pAnimal;


	char *pMem = new char[1000];
	delete []pMem;

	char c = 'a';
	string nam1(1,c);
	c++;
	string nam2(15,c);

	cout << nam1 << "    "<< nam2 << endl;
	return 0;
}
