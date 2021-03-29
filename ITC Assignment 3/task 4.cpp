#include<iostream>
using namespace std;
int main()
{
	int start, end, num = 1,Ceven=0,Codd=0,Count=0;
	cout << "Enter your starting number: "; cin >> start;
	cout << "Enter your ending number: "; cin >> end;
	cout << endl;

	num = start;
	if (num <= end)
	{
		while (num <= end)
		{
			if (num % 2 == 0)
			{
				cout << num << " is even. " << endl;
				Ceven++;
			}
			else
			{
				cout << num << " is odd. " << endl;
				Codd++;
			}
			Count++;
			num++;
		}

		cout << endl;
		cout << "Total numbers are: " << Count << endl;
		cout << "Total Even numbers are: " << Ceven << endl;
		cout << "Total Odd numbers are: " << Codd << endl;
		
	}

	else
	{
		cout << "Your starting number should be less then or equal to your ending number." << endl;
	}

	return 0;
}