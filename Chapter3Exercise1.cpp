#include <iostream>
using namespace std;

int main()
{
	double gallons, miles, milesPerGallon;

	cout << "Enter the number of gallons of gas the car can hold: ";
	cin >> gallons;
	
	cout << "Enter the number of miles the car can driven on a full tank: ";
	cin >> miles;
	
	if (gallons <= 0)
	{
		cout << "Gallons must be greater than zero." << endl;
		return 1;
	}

	milesPerGallon = miles / gallons;
	cout << "The car can driven " << milesPerGallon << " miles per gallon." << endl;
	
	return 0;
}