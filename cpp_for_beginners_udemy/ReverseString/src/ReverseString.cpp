//============================================================================
// Name        : ReverseString.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char arr[] = "hello";

	int len = sizeof(arr) - 1;

	char *pstart = arr;
	char *pend = arr + len - 1;

	while(pstart < pend){

		char save = *pstart;
		*pstart = *pend;
		*pend = save;
		pstart++;
		pend--;
	}

	cout << arr << endl;
	return 0;
}
