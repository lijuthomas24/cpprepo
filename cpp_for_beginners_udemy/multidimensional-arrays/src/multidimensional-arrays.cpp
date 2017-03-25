//============================================================================
// Name        : multidimensional-arrays.cpp
// Author      : Liju
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string arr[2][3] = {
			{"fox","cat","dog"},
			{"hello", "i am", "here"}
	};

	for(int i =0; i < 2; ++i){
		for(int j = 0; j < 3; ++j){
			cout << arr[i][j] << " " << flush;
		}
		cout << endl;
	}

	return 0;
}
