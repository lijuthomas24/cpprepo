//============================================================================
// Name        : Classes.cpp
// Author      : Liju
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"
using namespace std;

int main() {
	cout << "Starting Program......\n";

	{
		Cat bob;
		bob.speak();
	}//bob destroyed here

	Cat bob1;
	bob1.speak();
	cout << "Ending Program......\n";
	return 0;
}//bob1 destroyed here
