// question1.cpp : Defines the entry point for the console application.
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
	
	cout << "t\n\n\tplease enter number 1: ";
	cin >> number1;
	cout << "t\n\n\tplease enter number 2: ";
	cin >> number2;
	cout << "t\n\n\tplease enter number 3: ";
	cin >> number3;

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
	else
		cout << "\n\n\tFalse";

	_getch();


	return 0;
}

