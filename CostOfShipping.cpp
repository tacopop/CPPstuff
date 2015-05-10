// 

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{

	int weight=0;
	double price=0;
	int miles=0;
	double total_price=0;


	cout << "Enter the weight of the package: ";
	cin >> weight;

	if (weight <= 0)
	{
		cout << "Invalid weight"; 
		system("pause");
		return 0;
	}
	else if (weight <= 2)
		price = 1.10;
	else if ((weight > 2) && (weight <= 6))
		price = 2.20;
	else if ((weight > 6) && (weight <= 10))
		price = 3.70;
	else if ((weight > 10) && (weight <= 20))
		price = 4.80;
	else
	{
		cout << "Too nuch weight";
		system("pause");
		return 0;
	}

	cout << "How many miles to ship package?";
	cin >> miles;

	if (miles < 10 || miles >3000)
	{
		cout << "Cannot Ship ";
		system("pause");
		return 0;
		
	}
	else
	{
		int mile_blocks = miles / 500;
		if (miles % 500 > 0)
			mile_blocks++;
		
		total_price = mile_blocks * price;
	}
	cout << endl;
	cout << "Price is: $";
	cout << setprecision(2) << fixed << total_price;
	
	cout << endl;
	cout << endl;

	system("pause");

	return 0;
}
