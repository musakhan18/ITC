#include<iostream>
using namespace std;
int main()
{
	int num, n, x, a = 0, count = 8;

	cout << "Enter a eight digit number: " ; cin >> n;
	cout << "enter the number whose position you want to find: " ; cin >> num;

	while (n != 0)
	{
		x = n % 10;
		n = n / 10;

		if (x == num)
		{
			a = count;
		}

		count--;
	}

	cout << "The left most position of " <<num<< " is: " << a << endl;

	return 0;
}