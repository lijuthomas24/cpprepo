//============================================================================
// Name        : Arrays.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//could declare here!!
string text[] = { "hi", "how", "are" };


void show1(string str[]){
	//cout << sizeof(str) << endl; //returns sizeof pointer not array
	for(int i = 0; i < 3; i++){
		cout << str[i] << endl;
 	}
}

void show2(int n, string str[]){

	for(int i = 0; i < n; i++){
		cout << str[i] << endl;
 	}
}

void show3(string (&str)[3]){

	for(unsigned int i = 0; i < sizeof(str)/sizeof(string); i++){
		cout << str[i] << endl;
 	}
}

string *getArray(){
	//Dont return pointer to local variables;
	//string text[] = { "hi", "how", "are" };
	return text;
}


char *getMemory(){
	char *pMem = new char[100];
	return pMem;
}

void freeMemory(char *pMEM){
	cout << "Deleted..!!";
	delete [] pMEM;
}
int main() {

	string text[] = {"one","two","three"};
	cout << sizeof(text) << endl; //returns sizeof array
	show1(text);
	show2(3,text);
	show3(text);

	char *p = getMemory();
	freeMemory(p);  //delete [] p;
	return 0;
}
