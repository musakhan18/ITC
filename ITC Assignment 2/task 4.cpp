#include<iostream>
using namespace std;
int main()
{
	float a, b, code, sum, diff, prod, quot, remain;
	cout << "Enter your first number: "; cin >> a;
	cout << "Enter your second number: "; cin >> b;
	cout << "Enter your code: "; cin >> code;
	sum = a + b;
	diff = a - b;
	prod = a * b;
	quot = a / b;
	remain = fmod(a,b);
	if (code == 1)
	{
		cout << sum;
	}
	else if (code == 2)
	{
		cout << diff;
	}
	else if (code == 3)
	{
		cout << prod;
	}
	else if (code == 4)
	{
		cout << quot;
	}
	else if (code == 5)
	{
		cout << remain;
	}
	return 0;
}