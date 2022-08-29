/*
Author: Anita Prova
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Homework E1.7
The program prints some names on separate lines. 
*/

#include <iostream>
using namespace std;

int main()
{
	cout << "Enter number of gallons: ";
	float numgal = 0;
	cin >> numgal;

	cout << "Enter fuel efficency in miles per gallon: ";
	float mpg = 0;
	cin >> mpg;

	cout << "Enter price of gas per gallon: ";
	float price = 0;
	cin >> price;

	float costPer100 = (100/mpg)*price;
	float distance = numgal * mpg; 
	cout << "Your trip will cost " << costPer100 << " dollars per 100 miles. You will travel " << distance << " miles." << endl;

	return 0;
}
