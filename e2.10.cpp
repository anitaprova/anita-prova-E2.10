#include <iostream>

using namespace std;

int main()
{
	cout << "Enter number of gallons: " << endl;
	int numgal = 0;
	cin >> numgal;

	cout << "Enter fuel efficency in miles per gallon: " << endl;
	int mpg = 0;
	cin >> mpg;

	cout << "Enter price of gas per gallon: " << endl;
	float price = 0;
	cin >> price;

	int x = (price * numgal) / (100/mpg);
	cout << "Your trip will cost " << x << " dollars per 100 miles." << endl;
	return 0;
}
