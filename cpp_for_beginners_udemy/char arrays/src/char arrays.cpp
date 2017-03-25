//============================================================================
// Name        : char.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char arr[] = "hello"; //== char arr[] = {'h','e','l','l','o'}

	for(unsigned int i = 0; i < sizeof(arr); i++){
		cout << i << " : " << arr[i] << endl;
		if(i == sizeof(arr)-1){
			cout << (int)arr[i] << endl; // '\0' null character appended
		}
	}

	int k = 0;

	while(true){

		if(arr[k] == 0)
			break;

		cout << arr[k] << flush;
		k++;
	}
	return 0;
}
