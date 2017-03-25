//============================================================================
// Name        : Arithmethic.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;





int main() {
	int value = 6/2;
	cout << value << endl;

	float value1 = (float)7/2;
	cout << value1 << endl;

	double value2 = (double)11/2;
	cout << value2 << endl;

	int value3 = (int)7.7;
	cout << value3 << endl;

	value3 += 1; //value3 = value3+1 .. value++
	cout << value3 << endl;

	value /= 3;
	cout << value << endl;

	int value4 = 12 % 4; //only for int values
	int value5 = 13 % 4;
	cout << value4 << "...... " << value5 <<  endl;

	double equation = 5.3/4+2*6;  // ((5.3/4)+(2*6))
	cout  << equation << endl;

	return 0;
}
