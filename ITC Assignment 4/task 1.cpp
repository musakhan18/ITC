#include<iostream>
using namespace std;
int main()
{
	int a, b, count=1,sum=0;
	cout << "Enter your first number: "; cin >> a;
	cout << "Enter your second number: "; cin >> b;
	while (count<=b)
	{
		sum = sum + a;
		count++;
	}
	cout << "Product = " << sum << endl;
	return 0;
}