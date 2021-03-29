#include<iostream>
using namespace std;

int main()
{

	int a, b, c;

	cout<<"Enter your three numbers"<<endl;
	cin >> a >> b >> c;
	if (a >= b && a >= c)
	{
	 if (b >= c)
		{
		cout<<"The second largest number is: "<<b;
		}
		else
		{
			cout<< "The second largest number is: " << c;
		}
	}
	else if (b >= a && b >= c)
	{
		if (a >= c)
		{
		cout<< "The second largest number is: " << a;
		}
		else
		{
			cout<< "The second largest number is: " << c;
		}
	}
	else if (a >= b)
	{
		cout << "The second largest number is: " << a;
	}
	else
	{
		cout<< "The second largest number is: " << b;
	}
	return 0;
	}