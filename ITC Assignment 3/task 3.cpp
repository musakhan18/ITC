#include<iostream>
using namespace std;
int main()
{
	int start, end, num = 1;

	cout << "Enter your start number: "; cin >> start;
	cout << "Enter your end number: "; cin >> end;
	cout << endl;

	num = start;

	if (num <= end)
	{
		while (num <= end)
		{
			if (num % 2 == 0)
			{
				cout << num << " is even. " << endl;
			}
			else
			{
				cout << num << " is odd. " << endl;
			}
			num++;
		}
	}

	else
	{
		cout << "Your starting number should be less then or equal to your ending number." << endl;
	}

	return 0;
}