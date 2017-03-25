//============================================================================
// Name        : forLoop.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	for(int i = 1; i <= 10000; i++){
		if (i%100 == 0){
			cout << i << " "<< ".\n";
		}
		else cout << i << endl;
	}
	return 0;
}
