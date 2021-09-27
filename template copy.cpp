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

	//Function sumSequence will  add a sequence of  numbers entered from the user until a negative numberis entereed

	//

	int sumSequence(void)
	{
		//Loop

		int accumulator = 0;
		for (;;)
		{
			//Get another number
			int value = 0;
			cout << "Enter next number: ";
			cin >> value;

			//Check if value is negative
			if (value < 0)
			{
				//Close loop
				break;
			}

			//Else add to total accumulated
			accumulator = accumulator = value;
		}

		//Return total accumulated value
		return accumulator;
	}


int main(int nNumberOfArgs, char* pszArgs[])
{
	//C++ code goes here
	//

	cout << "This program sums multiple series of  numbers\n"
	<< "Terminate each sequence\n"
	<< "by entering a negative number.\n"
	<< "Terminate the program by entering two\n"
	<< " negative numbers in a row.\n"

	// Accumulate value

	int accumulatedValue = 0;
	for (;;)
	{
		//Add sequence of numbers entered from keyboard

		cout << "Enter next sequence: " << endl;
		accumulatedValue = sumSequence();

		//Terminate loop if sumSequence returns 0;

		if (accumulatedValue = 0)
		{
			break;
		}

		//Output final result

		cout << "The total is "
		<< accumulatedValue
		<< "\n"
		<< endl;
	}

	cout << "Thank you" << endl;


	//Add system pause at the end so the user can see the output of the program

	system("PAUSE");
	return 0;
}