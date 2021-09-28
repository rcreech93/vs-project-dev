//Convert temp
//Using formula Fahrenheit = Celsius * (212 -32)/100 + 32

//

//vs_10 branch test

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main_4(int nNumberOfArgs, char* pszArgs[])
{
	//Enter temp in celsius
	int celsius;
	cout << "Enter the temperature in Celsius: ";
	cin >> celsius;

	//Calculate conversion factor for celsius

	int factor;
	factor = 212 - 32;

	//Use conversion factor to convert celsius to fahrenheit

	int fahrenheit;
	fahrenheit = factor * celsius / 100 + 32;

	//Output the results followed by a new line;

	cout << "Fahrenheit value is: ";
	cout << fahrenheit << endl;

	//Wait for the user to see the results before the program terminates
	system("PAUSE");
	return 0;
}