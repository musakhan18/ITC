#include <iostream>

using namespace std;

int main()
{
	int quantity, package = 99, cost;

	cout << "How many units sold? ";
	cin >> quantity;

	if (quantity >= 10 && quantity <= 19)
	{
		cost = package * quantity * 0.2;
		cout << "Total cost is: " << cost << endl;
	}
	else if (quantity >= 20 && quantity <= 49)
	{
		cost = package * quantity * 0.3;
		cout << "Total cost is: " << cost << endl;
	}
	else if (quantity >= 50 && quantity <= 99)
	{
		cost = package * quantity * 0.4;
		cout << "Total cost is: " << cost << endl;
	}
	else if (quantity > 100)
	{
		cost = package * quantity * 0.5;
		cout << "Total cost is: " << cost << endl;
	}
	else cost = package * quantity;

	cout << "Total Cost is " << cost << endl;
	
	return 0;
}