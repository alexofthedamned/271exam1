#include "pch.h"
#include <string>
#include <iostream>
using namespace std;

float f2c(float f) {
	float c;
	c = (f - 32)*(0.55555555556);
	cout << c << endl;
	return c;
}

float printTable(float lower, float higher, int counter) {

	while (lower < higher) {
		cout << lower << "\t";
		f2c(lower);
		lower += counter;
	}
	return 0;
}

int main()
{
	float higher;
	float lower;
	int counter = 0;

	cout << "Please Enter a lower limit: " << endl;
	cin >> lower;
	cout << "Please Enter a higher limit: \n";
	cin >> higher;

	cout << "Please enter a step counter (between 1-10):\n";
	cin >> counter;
	while (counter < 1 || counter > 10) {
		cout << "Invalid entry! Please enter a valid value BETWEEN 1-10:\n";
		cin >> counter;
	}

	cout << "\nFarenheit \t Celcius \n ------- \t ------ \n";

	printTable(lower, higher, counter);

	main(); 
	return 0;
}

