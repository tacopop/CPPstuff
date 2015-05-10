#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	// create variables
	int numberOfCalories, gramsOfFat, fatCalories;
	double fatPercentage;

	//request user input 
	cout << "How many calories are in your food? ";
	cin >> numberOfCalories;

	cout << "How many grams of fat are in your food? ";
	cin >> gramsOfFat;

	//calculate fat calories and fat percentage
	fatCalories = gramsOfFat * 9;
	fatPercentage = (static_cast<double>(fatCalories) / numberOfCalories) * 100;

	//display results
	cout << "There are: " << fatCalories << " fat calories in your food" << endl
		<< "The fat percentage is: " << setprecision(4) << showpoint <<  fatPercentage << " %" << endl;


	return 0;
}


