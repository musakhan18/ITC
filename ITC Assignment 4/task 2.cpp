#include<iostream>
using namespace std;
int main()
{
	int num, rev = 0, rem, x,a, count = 1;
	cout << "Enter number of digits: "; cin >> x;
	cout << "Enter your number: "; cin >> num;
	if (num > 99999&&x>5&&x<=9)
	{
		cout << endl;
		cout << "Orignal number: " << num << endl;
		cout << "reverse number: ";
		while (count <= x)
		{
			rem = num % 10;
			a = rem;
			
			if (count == 3 || count == 5)
			{
				if (rem >= 0 && rem <= 8)
				{
					a = a + 1;
					cout << a;
				}
				else if (rem == 9)
				{
					cout << 0;
				}
			}
			else
			{
				cout << a;
			}
			a = a * 10 + rem;
			num /= 10;
			count++;
		}

		
	}
	else
	{
		cout << "Your number should have more then five digits." << endl;
	}
}