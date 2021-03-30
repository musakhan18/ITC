#include<iostream>
using namespace std;
int main()
{
	int first, second, third;
	cout << "Enter first number: "; cin >> first;
	cout << "Enter second number: "; cin >> second;
	cout << "Enter third number: "; cin >> third;
	cout << endl;
	if (first > second&&first > third)
	{
		cout << "maximum = " << first << endl;
	}
	if (second>first&&second>third)
	{
		cout << "maximum = " <<second << endl;
	}
	if (third>first&&third>second)
	{
		cout << "maximum = " << third << endl;
	}
	return 0;
}