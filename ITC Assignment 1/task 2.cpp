#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "enter a four digit number " << endl;
	cin >> a;
	if (a > 999 && a < 9999)
	{
		a = a + 8;
		a = a / 3;
		a = a % 5;
		a = a * 5;
		cout << "your result is = " << a << endl;
	}
	else
	{
		cout << "Your number not contain 4 digits" << endl;
	}
	return 0;
}
