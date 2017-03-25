//============================================================================
// Name        : Pointer.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	const int elements = 5;
	string texts[elements] = {"one", "two", "three", "four", "five"};
	string *ptexts = texts;

	ptexts+= 3;

	cout << *ptexts << endl;

	ptexts-= 3;

		cout << *ptexts << endl;

	string *pEnd = &texts[elements];
	ptexts = &texts[0];

	while(ptexts!=pEnd){
		cout << *ptexts << endl;
		ptexts++;
	}

	ptexts = &texts[0];

	int elements2 = pEnd - ptexts;

	cout << "Elements2: " << elements2 << endl;

	//middle element

	ptexts += elements/2;

	cout << "Middle element of array: "<<*ptexts << endl;
	return 0;
}
