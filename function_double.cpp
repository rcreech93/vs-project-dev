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


//Square - returns the square of the argument doubleVar 
//         the value that is to be squared

double square(double doubleVar)
{
    return doubleVar * doubleVar;
}

//sumSequence - accumulates the square of numberes entered
//              until the user enters a negative number

double sumSequence(void)
{
    //Loop
    double accumulator = 0.0;
    for(;;)
    {
        //Get another number
        double dValue = 0;
        cout << "Enter another number: ";
        cin >> dValue;

        //Check if negative

        if (dValue < 0)
        {
            //Close loop
            break;

        }

        //Else double value and send to accumulator

        double value = square(dValue);

        accumulator = accumulator + value;
    }
    //Return accumulated value
    return accumulator;
}
int main(int nNumberOfArgs, char* pszArgs[])
{
	//C++ code goes here
	//

    //Main program logic

    cout << "This program sums multiple series \n"
    << "of numbers squared. Terminates each sequence\n"
    << "by entering a negative number. Terminate program\n"
    << "by entering two negative numbers in a row.\n"
    << endl;

    //Accumulate

    double accumulatedValue;
    for(;;)
    {
        //Sum of numbers entered from user
        cout << "Enter next sequence of numbers: " << endl;
        accumulatedValue = sumSequence();

        //Terminiate if sequence is 0 or negative
        if (accumulatedValue <= 0.0)
        {
            break;
        }

        //Output accumulated result

        cout << "\nThe total of the values entered is: " 
        << accumulatedValue
        << endl;
        
    }

	//Add system pause at the end so the user can see the output of the program

	system("PAUSE");
	return 0;
}