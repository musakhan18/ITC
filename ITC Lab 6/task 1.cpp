#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "enter your first number: "; cin >> a;
	cout << "enter your second number: "; cin >> b;
	cout << endl;
	if (a > b)
	{
		cout << a << "is greater" << b << endl;
	}
	else
	{
		cout << b << " is greater then "<< a << endl;
	}
	return 0;
}