#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout << "Enter your numbers:" << endl;
	cin >> num1;
	cin >> num2;
	if (num1 % num2 == 0)
	{
		cout << num1 << " is the multiple of " << num2 << endl;
	}
	else
	{
		cout << num1 << " is not the multiple of " << num2 << endl;
	}
	return 0;
}