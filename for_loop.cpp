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

    //Input loop count and store as variable

    int loopCount;
    cout << "Enter loopCount: ";
    cin >> loopCount;

    //Start the loop

    for (; loopCount > 0;)
    {
        loopCount = loopCount -1;
        cout << "Only " << loopCount << " loops to go\n";
        
    }

	//Add system pause at the end so the user can see the output of the program

	system("PAUSE");
	return 0;
}