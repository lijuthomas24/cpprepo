//============================================================================
// Name        : sizeof.cpp
// Author      : Liju
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
//	int value = 34;

//	cout << sizeof(value) << endl;
//	cout << sizeof(int)<< endl;


	int arr[4] = {1,2,3,4};

	cout << sizeof(arr)<<endl;
	cout <<sizeof(int)<< endl;
	for(int i =0; i < 4; i++){
		cout << arr[i] << " ";
	}
	cout << "\nusing sizeof operator\n";
	for(unsigned int i =0; i < sizeof(arr)/sizeof(int); i++){
			cout << arr[i] << " ";
		}
	cout << "\n---------------------------" << endl;

	int arr2[2][3]= {1,2,3,4,5,6};

	for(unsigned int i =0; i < sizeof(arr2)/sizeof(arr2[0]); i++){
		for(unsigned int j = 0; j < (sizeof(arr2[0])/sizeof(int)) ; ++j){
				cout << arr2[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
