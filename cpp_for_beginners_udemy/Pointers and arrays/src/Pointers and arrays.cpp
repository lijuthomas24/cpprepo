//============================================================================
// Name        : Pointers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Pointers and Arrays Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string text[] = {"one", "two", "three"};

	string *ptext = text; //ptext stores the address of text array.. the very first element

	cout << sizeof(text)/sizeof(text[0]) << endl;

	for(int i = 0; i < sizeof(text)/sizeof(text[0]); i++){
		cout << text[i] << " " << flush;
	}
	cout << "\n";

	for(int i = 0; i < sizeof(text)/sizeof(text[0]); i++){
			cout << *(ptext+i) << " " << flush;
		}

	cout << "\n";

	for(int i = 0; i < sizeof(text)/sizeof(text[0]); i++){
			cout << ptext[i] << " " << flush;
		}


	cout << "\n";
	//one more way but the value stored at ptext changes

	for(int i = 0; i < sizeof(text)/sizeof(text[0]); i++){
				cout << *ptext << " " << flush;
				ptext++;
			}

	cout << "\n";

	return 0;
}
