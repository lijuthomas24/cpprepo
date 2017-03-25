//============================================================================
// Name        : secondstotime.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int seconds;
	cout << "Enter the seconds: ";
	cin >> seconds;

	int hh,mm,ss, count = 0;


	hh = seconds/ 3600;
	int tmp = seconds%3600;
	if(tmp < 60) ss = tmp;
	else if (tmp > 60){
		while(tmp/60 != 0){
			count++;
			tmp = tmp % 60;
		}
		mm = count;
		ss =  tmp;
	}
	else{
		mm = count + 1;
	}
	cout << hh << " hrs " << mm << " mins " << ss << " seconds " << endl;
	return 0;
}
