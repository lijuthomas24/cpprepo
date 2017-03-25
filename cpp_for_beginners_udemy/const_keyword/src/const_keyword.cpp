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
	void setName(string name){
		this->name = name;
	}

//	void speak(){
//		cout << "My name is: " << name << endl;
//	}

	//Any methods which doesn'y change the instance variable can be
	//declared as a const member function, so there is way that it changes
	// the instance variable of the class
	//Mention const keyword after () of a member function, example below
	void speak() const {
			cout << "My name is: " << name << endl;
			//name = "Barca"; //error;
		}
};

int main() {

	const int value = 7; //const names preferrable to be in uppercae const double PI = 3.14
	//value = 10; --> error: assignment of read-only value
	cout << value << endl;

	Animal animal;
	animal.setName("Freddy");
	animal.speak();

	int value1 = 8;
	 int *pvalue = &value1;
	 cout << *pvalue << endl;

	 int num = 11;
	 pvalue = &num; //points to another variable
	 *pvalue = 17; //change value of pointer points to
	 cout << *pvalue << endl;

	 const int *pvalue2 = &value1; //pointer to an int that is const,
	 	 	 	 	 	 	 	   //cant change the value pointed too

	 //*pvalue2 = 19; //error; assignment of read-only value
	 cout << *pvalue2 << endl;

	 //----------------------------------------------------------------
	 int value4 = 99;
	 int * const pvalue3 = &value4; //constant pointer to an int
	 	 	 	 	 	 	 	   //we cant reassign pointer to point somewhere else
	 *pvalue3 = 24; //correct


	 //pvalue3 = &value1; error; assignement to read-only value pvalue3;

	 cout << *pvalue3 << endl;

	 //----------------------------------------------------------------

	 int value5 = 187;
	 int value6 = 188;
	 const int * const pvalue4 = &value5;
	 // pvalue4 is a constant pointer to a constant int
	 //meaning pointer cannot be assigned to another address location
	 //value of int pointed by pvalue4 cannot be changed

	 //*pvalue4 = value6;
	 //assignement to read-only location

	 //pvalue4 = &value6;
	 //assignement to read only value

	 cout << *pvalue4 << endl;

	return 0;
}
