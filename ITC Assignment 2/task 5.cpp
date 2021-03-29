#include<iostream>
using namespace std;
int main()
{
	int num, digit;
	cout << "Enter your number: "; cin >> num;
	if (num >= 100000 && num <= 999999)
	{
		digit = num / 100000;
		if (digit == 1)
		{
			cout << " one ";
		}
		else if (digit == 0)
		{
			cout << " zero ";
		}
		else if (digit == 2)
		{
			cout << " two ";
		}
		else if (digit == 3)
		{
			cout << " three ";
		}
		else if (digit == 4)
		{
			cout << " four ";
		}
		else if (digit == 5)
		{
			cout << " five ";
		}
		else if (digit == 6)
		{
			cout << " six ";
		}
		else if (digit == 7)
		{
			cout << " seven ";
		}
		else if (digit == 8)
		{
			cout << " eight ";
		}
		else if (digit == 9)
		{
			cout << " nine ";
		}
		num = num % 100000;
		digit = num / 10000;
		if (digit == 1)
		{
			cout << " one ";
		}
		else if (digit == 0)
		{
			cout << " zero ";
		}
		else if (digit == 2)
		{
			cout << " two ";
		}
		else if (digit == 3)
		{
			cout << " three ";
		}
		else if (digit == 4)
		{
			cout << " four ";
		}
		else if (digit == 5)
		{
			cout << " five ";
		}
		else if (digit == 6)
		{
			cout << " six ";
		}
		else if (digit == 7)
		{
			cout << " seven ";
		}
		else if (digit == 8)
		{
			cout << " eight ";
		}
		else if (digit == 9)
		{
			cout << " nine ";
		}
		num = num % 10000;
		digit = num / 1000;
		if (digit == 1)
		{
			cout << " one ";
		}
		else if (digit == 0)
		{
			cout << " zero ";
		}
		else if (digit == 2)
		{
			cout << " two ";
		}
		else if (digit == 3)
		{
			cout << " three ";
		}
		else if (digit == 4)
		{
			cout << " four ";
		}
		else if (digit == 5)
		{
			cout << " five ";
		}
		else if (digit == 6)
		{
			cout << " six ";
		}
		else if (digit == 7)
		{
			cout << " seven ";
		}
		else if (digit == 8)
		{
			cout << " eight ";
		}
		else if (digit == 9)
		{
			cout << " nine ";
		}
		num = num % 1000;
		digit = num / 100;
		if (digit == 1)
		{
			cout << " one ";
		}
		else if (digit == 0)
		{
			cout << " zero ";
		}
		else if (digit == 2)
		{
			cout << " two ";
		}
		else if (digit == 3)
		{
			cout << " three ";
		}
		else if (digit == 4)
		{
			cout << " four ";
		}
		else if (digit == 5)
		{
			cout << " five ";
		}
		else if (digit == 6)
		{
			cout << " six ";
		}
		else if (digit == 7)
		{
			cout << " seven ";
		}
		else if (digit == 8)
		{
			cout << " eight ";
		}
		else if (digit == 9)
		{
			cout << " nine ";
		}
		num = num % 100;
		digit = num / 10;
		if (digit == 1)
		{
			cout << " one ";
		}
		else if (digit == 0)
		{
			cout << " zero ";
		}
		else if (digit == 2)
		{
			cout << " two ";
		}
		else if (digit == 3)
		{
			cout << " three ";
		}
		else if (digit == 4)
		{
			cout << " four ";
		}
		else if (digit == 5)
		{
			cout << " five ";
		}
		else if (digit == 6)
		{
			cout << " six ";
		}
		else if (digit == 7)
		{
			cout << " seven ";
		}
		else if (digit == 8)
		{
			cout << " eight ";
		}
		else if (digit == 9)
		{
			cout << " nine ";
		}
		num = num % 10;
		digit = num / 1;
		if (digit == 1)
		{
			cout << " one ";
		}
		else if (digit == 2)
		{
			cout << " two ";
		}
		else if (digit == 0)
		{
			cout << " zero ";
		}
		else if (digit == 3)
		{
			cout << " three ";
		}
		else if (digit == 4)
		{
			cout << " four ";
		}
		else if (digit == 5)
		{
			cout << " five ";
		}
		else if (digit == 6)
		{
			cout << " six ";
		}
		else if (digit == 7)
		{
			cout << " seven ";
		}
		else if (digit == 8)
		{
			cout << " eight ";
		}
		else if (digit == 9)
		{
			cout << " nine ";
		}
	}
	else
	{
	cout << "Your number is not correct";
 }
 return 0;
}