//============================================================================
// Name        : do-while.cpp
// Author      : Liju
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	const string password = "liju24";
	int count = 3;
	string input;
	do {
		cout << "Enter your password : " << flush;

		cin >> input;

		if (input != password) {
			count--;
			cout << "Access Denied... Retries left: " << count << endl;
		}
	} while (input != password && count != 0);

	if (count == 0) {
		cout << "\nAccess disabled, exhausted retries!! Contact Administrator.."
				<< endl;
	} else {
		cout << "Password Accepted" << endl;
	}
	return 0;
}
