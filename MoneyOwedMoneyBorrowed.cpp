
// This program  allows a student to enter the amount of money a customer
// owes and the amount of money the customer paid


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double borrowed, paid, owed;

	cout << "Enter how much the customer borrowed: $";
	cin >> borrowed;

	cout << "Enter the how much the customer has paid:$";
	cin >> paid;

	owed = borrowed - paid;

	if (owed <= 0)
		cout << "Customer has paid off debt and owes nothing.";


	else
	{
		cout << "The customer owes: $" << owed;
		int dollars = (int)owed;
		int change = (owed - dollars) * 100;
		int quarters = change / 25;
		change %= 25;
		int dimes = change / 10;
		change %= 10;
		int nickels = change / 5;
		change %= 5;
		int pennies = change;

		cout << "\ndollar: " << dollars
			<< "\nquarters: " << quarters
			<< "\ndimes: " << dimes
			<< "\nnickels: " << nickels
			<< "\npennies: " << pennies
			<< "\n";
	}



	system("pause");

	return 0;
}