#include<iostream>
using namespace std;
int main()
{
	int power, base, x=1;

	cout << "Enter your base: " ; cin >> base;
	cout << "Enter your power: " ; cin >> power;
	cout << endl;

	if (base > 0 && power >= 0)

	{

		cout << base << " raise to power " << power << " = ";

		while (power >= 1)
		{
			x *= base;
			--power;
		}

		cout << x << endl;
	}

	else
	{
		cout << "base should be positive and power should be a non negtive number." << endl;
	}

	return 0;
}