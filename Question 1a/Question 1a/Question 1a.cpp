// Question 1a.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <Windows.h>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int number1 = 0, number2 = 0, number3 = 0, differOne = 0, differTwo = 0;
	bool valid;

	cout << "\n\n\tplease enter number 1: ";
	cin >> number1;
	cout << "\n\n\tplease enter number 2: ";
	cin >> number2;
	cout << "\n\n\tplease enter number 3: ";
	cin >> number3;

	while (number1 = false)
	{
		cout << "\n\n\tPlease enter your number: ";
		cin >> number1;
		cin >> number2;
		cin >> number3;

		if (cin.fail())
		{
			cout << "\n\n\tERROR";
			_getch();
			cin.clear();
			
		}
		else
		{
			valid = true;
		}
		cin.ignore(80, 'n');
	}
	while (!valid);       // Everytime I enter an invalid input the program debugs and it comes up this thing about
	                        // 'breaking' and creates line 43 as a breakpoint, theres like a little yellow line on it

	int temp = 0;
	if (number1 < number2)
		temp = number1, number1 = number2, number2 = temp;
	if (number2 < number3)
		temp = number2, number2 = number3, number3 = temp;
	if (number1 < number2)
		temp = number1, number1 = number2, number2 = temp;

	differOne = number3 - number2;
	differTwo = number2 - number1;

	if (differOne == differTwo)
		cout << "\n\n\tTrue";
	
	else if (differOne != differTwo)

		cout << "\n\n\tFalse";

	cout << "\n\n\tPress any key to continue...";


	_getch();
	return 0;
}