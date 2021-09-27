//C++ console application template
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
    //Sets output to be in Hexadecimal
    cout.setf(cout.hex);
    //Initialie two Arguments

    int nArg1;
    nArg1 = 0x1234;

    int nArg2;
    nArg2 = 0x00ff;

    //Pefrom each operation check on both arguments

    //First NOT operation

    cout << "Arg1           = 0x" << nArg1 << "\n";
    cout << "Arg2           = 0x" << nArg2 << "\n";
    cout << "~nArg1         = 0x" << ~nArg1 << "\n";
    cout << "~nArg2         = 0x" << ~nArg2 << "\n";

    //Next binary operation

    cout << "nArg1 & nArg2 = 0x" << (nArg1 & nArg2) << "\n";
    cout << "nArg1 | nArg2 = 0x" << (nArg1 | nArg2) << "\n";
    cout << "nArg1 ^ nArg2 = 0x" << (nArg1 ^ nArg2) << "\n";
    


	//Add system pause at the end so the user can see the output of the program

	system("PAUSE");
	return 0;
}