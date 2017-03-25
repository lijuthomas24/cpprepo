#include<iostream>
#include<iomanip> //input output manipulation
using namespace std;

int main(){
	float fvalue = 7.43;

	cout << fvalue << endl;
	cout << fixed << fvalue << endl; //fixed defined in iomanip
	cout << scientific << fvalue << endl; //scientific defined in iomanip
	cout << setprecision(20) << fixed << fvalue << endl;

	double dvalue = 7.43;
	cout << "Double value = " << dvalue << endl;

	long double lvalue = 123456.38328838;

	cout << "Long double = " << lvalue << endl ;

	cout << "Size of Float = " << sizeof(fvalue)<<endl;
	cout << "Size of double = " << sizeof(dvalue)<<endl;
	cout << "Size of long double = " << sizeof(lvalue)<<endl;

	return 0;
}
