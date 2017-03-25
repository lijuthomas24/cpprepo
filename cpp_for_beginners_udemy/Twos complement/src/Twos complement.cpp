
#include <iostream>
using namespace std;

int main() {
	char ch = 127;

	cout << (int)ch << endl;


	++ch;

	cout << (int)ch << endl;

	return 0;
}

/*
 * 3 bit system : 111 -> 7
 * 8 bit system : 11111111 -> (2 power of 8) - 1 = 255
 * 16 bit system: 11111111 11111111
 * 32 bit system: 11111111 11111111 11111111 11111111
 *
 * Most-significant bit represents the sign so
 * 11111111 == 1..1111111-->max num that can be stored in signed is 2 power 7 = 127
 */
