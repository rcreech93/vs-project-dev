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

    //Creating infinite loop and break upon entering a negative number

    //Start with loop count

    int accumulator = 0;

    cout << "This program sums values entered"
    << "by the user\n";
    cout << "Terminate the loop by entering "
    << "a negative number\n";

    //Loop until negative number

    for (;;)
    {
        //Grab another number
        int value = 0;
        cout << "Enter next number: ";
        cin >> value;

        //Check if negative

        if (value < 0)
        {
            //exit

            break;
    
        }

        //If positive, continue loop and add 1 to total

        accumulator = accumulator + value;

    }

    //After exiting loop we can  print the total result

    cout << "\n The total is: " << accumulator << "\n";
    
	//Add system pause at the end so the user can see the output of the program

	system("PAUSE");
	return 0;
}