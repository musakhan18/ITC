#include<iostream>
using namespace std;
int main()
{
	int num, fact = 1, mul;

	cout << "Enter your number: "; cin >> num;

	if (num >= 0)

	{
		mul = num;

		while (mul > 1)
		{
			fact = fact * mul;
			mul--;
		}

		cout << "Factorial of " << num << " is: " << fact << endl;
	}

	else
	{
		cout << "Factorial can be taken of only non negtive number.";
	}

	return 0;
}