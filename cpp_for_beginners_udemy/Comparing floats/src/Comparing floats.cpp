//============================================================================
// Name        : Comparing.cpp
// Author      : Liju
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	float fvalue = 1.1;

	if( fvalue == 1.1){
		cout << "EQUALS";
	}
	else{
		cout <<"NOT EQUALS";
	}
	cout << endl;
	cout << fvalue << endl;
	cout << "setprecision = " << setprecision(10) << fvalue;
	return 0;
}
