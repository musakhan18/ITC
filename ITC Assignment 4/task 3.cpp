#include<iostream>
using namespace std;
int main()
{
	int num, div = 2, count = 0;

	cout << "Enter a number: "; cin >> num;
	cout << endl;

	if (num >= 2)
	{
		while (div < num)
		{
			if (num % div == 0)
			{
				count++;
			}
			div++;
		}

		if (count == 0)
		{
			cout << num << " is a prime number." << endl;
		}
		else
		{
			cout << num << " is not a prime number." << endl;
		}
	}
	else
	{
		cout << "Prime number cannot be negative." << endl;
	}
	return 0;
}