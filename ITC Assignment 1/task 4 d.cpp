#include<iostream>
using namespace std;
int main ()
{
	int a, b;
	cout << "enter number first number: " << endl;
	cin >> a;
	cout << "enter your second number: " << endl;
	cin >> b;
	if (a < 50 || a < b)
	{
		cout << "condition is true" << endl;
	}
	else
	{
		cout << "condition is not true" << endl;
	}
	return 0;
}