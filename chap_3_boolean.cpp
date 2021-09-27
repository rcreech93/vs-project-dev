//Boolean algebra functions
//Robert Creech

//Templates provide a baseline for the developer to use 
//
//
//This template serves as a baseline for c++ console applications and applies basic header information
//Including any functions that are typically used

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int nNumberOfArgs, char* pszArgs[])
{
	//C++ code goes here
	//

	//Set output format for boolean variables
	//to true and false instead
	//of 1 or 0
	cout.setf(cout.boolalpha);

	//Initialize two arguments to compare

	int nArg1;
	cout << "Input value 1: ";
	cin >> nArg1;

	int nArg2;
	cout << "Input value 2: ";
	cin >> nArg2;

	bool b;
	b = nArg1 == nArg2;

	cout << "The statement, " << nArg1
		<< " equals " << nArg2
		<< " is " << b
		<< endl;
	 
	//Add system pause at the end so the user can see the output of the program

	system("PAUSE");
	return 0;
}