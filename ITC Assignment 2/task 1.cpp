#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a number: "; cin >> num;
	if (num >= 0 && num <= 10)
	{
		cout << "poor" << endl;
	}
	else if (num >= 11 && num <= 20)
	{
		cout << "weak" << endl;
	}
	else if (num >= 21 && num <= 30)
	{
		cout << "good" << endl;
	}
	else if (num >= 31 && num <= 40)
	{
		cout << "better" << endl;
	}
	else if (num >= 41 && num <= 50)
	{
		cout << "best" << endl;
	}
	return 0;
}