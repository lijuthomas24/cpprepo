
#include <iostream>
using namespace std;

class Machine{
private:
	int id;
public: //constructors are not inherited in c++
	Machine(): id(0){
		cout << "No argument constructor called.." << endl;
	}

	Machine(int iden): id(iden){
		cout << "Parameterised constructor called .." << endl;
	}

	void info(){
		cout << "ID : " << id << endl;
 	}
};

class Vehicle: public Machine {
public:
	//Vehicle():id(11) { cout << "Vehicle..." << endl; } --> id id private in
	Vehicle() { cout << "Vehicle..." << endl; }            //in super class

	//Vehicle(int iden):id(iden){
	Vehicle(int iden):Machine(iden){	//this calls parameterised cons in super class
		cout << " Parameterised constructor of Vehicle class.." << endl;
	}


};

class Car : public Vehicle{

public:
	//Car():Machine(999) --> error-> cannot call super class from this level
	Car():Vehicle(999){
		cout << "Car...!!!" << endl;
	}
};

int main() {

	Car car;
	car.info();
	return 0;
}
