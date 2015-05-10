// ConsoleApplication8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int _tmain()
{
	//declare variables of the two prices and the total
	double itemOne, itemTwo, total;

	//request user input for the two prices 
	cout << "What is the price of the first item: ";
	cin >> itemOne;

	cout << "What is the price of the second item: ";
	cin >> itemTwo;
	// if else statement to find the lowest price and divide it by two
	if (itemOne >= itemTwo)
		{
			itemTwo = itemTwo / 2;
		}

	else

		{
			itemOne = itemOne / 2;
		}
	//find total with the new prices
	total = itemOne + itemTwo;

	//display customers total 
	cout <<  "The customer's total is: $" << fixed << showpoint << setprecision(2) << total << endl;

	system("pause");
	return 0;
}
