// This program calculates the number of slices a pizza
//can be divided into for each slice to have an area of 14.13.


#include<math.h>
#include <iostream>

using namespace std;

int main()
{
	//declare variables
	int numberOfSlices;
	const double pi = 3.14;
	double radius;
	double areaOfTheWholePizza;
	double areaOfPizzaSlice=14.13;
	
	//enter the input items
	cout << "Enter the radius of the pizza ";
	cin >> radius;

	//calculate the area the whole pizza
	areaOfTheWholePizza = pi*pow(radius,2);

	//calulate the number of slices
	numberOfSlices = areaOfTheWholePizza/areaOfPizzaSlice  ;

	cout << "The number of slices is    " << numberOfSlices << endl;




	return 0;
}