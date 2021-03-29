#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "enter number first number: " << endl;
	cin >> a;
	cout << "enter your second number: " << endl;
	cin >> b;
	if (a < 50 && a < b)
	{
		cout << "your first number is smaller then your second number and smaller then 50" << endl;
	}
	else
	{
		cout << "your first number is not smaller then your second number and not smaller then 50" << endl;
	}
	return 0;
}
