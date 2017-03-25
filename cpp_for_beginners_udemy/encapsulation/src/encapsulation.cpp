
#include <iostream>
using namespace std;

class Frog{

private:
	string name;
	//string getName(){ return name;} //other way of encapsulation

public:
	Frog(string name): name(name){}
	string getName(){
		return name;
	}

	void info(){  //encapsulation --> getName() not accessed by main function
		cout << "My name is : " << getName() << endl;
	}

};
int main() {

	Frog frog("Freddy");
	//cout << frog.getName() << endl;
	frog.info(); //works if getName is private
	//frog.getname();  --> will not work if getName is private
	return 0;
}
