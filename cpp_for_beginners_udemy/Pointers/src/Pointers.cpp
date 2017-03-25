//============================================================================
// Name        : Pointers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


void manipulate(double value){
	value = 10.0;
	cout << "Value in double in manipulate is : " << value << endl;
}

void manipulate(double *value1){
	*(value1) = 15.0;
		cout << "Value in double in manipulate_2 is : " << *(value1) << endl;
}
int main() {

	int nvalue = 8;

	int *pnvalue = &nvalue;

	*(pnvalue) = 9;

	cout << "Int value is : " << nvalue << endl;
	cout << "Pointer to int address : "<< pnvalue << endl;
	cout << "Value stored in pointer address is : " << *pnvalue << endl;
	cout << "Address Value stored in pnvalue : " << pnvalue << endl;

	cout << "==================================\n";

	double dvalue = 123.45;
	cout << "1: dvalue = " << dvalue << endl;
	manipulate(dvalue);
	cout << "2. dvalue = " << dvalue << endl;

	cout << "==================================\n";
	cout << "3: dvalue = " << dvalue << endl;
	manipulate(&dvalue);
	cout << "4. dvalue = " << dvalue << endl;



	return 0;
}
