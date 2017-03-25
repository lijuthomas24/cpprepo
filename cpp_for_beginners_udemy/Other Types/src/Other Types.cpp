//============================================================================
// Name        : Other.cpp
// Author      : Liju
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	bool bvalue = true;

	cout << bvalue << endl;

	char cvalue ='a';
	char cvalue2 = 97; // 97 is not equal to '97'
	cout << "cvalue = " <<cvalue << endl;
	cout << "cvalue2 = " <<cvalue2 << endl;

	wchar_t wvalue = 'i';
	cout << "wvalue = " << wvalue << endl;
	cout << "wvalue = " << (char)wvalue << endl;
	cout << "Size of wchar = " <<sizeof(wchar_t);
	return 0;
}
