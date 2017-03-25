//============================================================================
// Name        : References.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void changeSomething(double value){
	value = 123.456;
}

void changeSomething2(double &value){
	value = 123.4;
}
int main() {

	int value1 = 8;
	//int value2 = value1;
	int &value2 = value1; //value2 is reference to value1, whatever changes made using value2 will reflect in value1
	value2 = 10;

	cout << "Value1: " << value1 << endl;
    cout << "Value2: " << value2 << endl;

    double value = 4.56;
    changeSomething(value);
    changeSomething2(value);
    cout << "Value: " << value << endl;
    return 0;
}
