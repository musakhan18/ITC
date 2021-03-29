#include<iostream>
using namespace std;
int main()
{
	int limit, first = 1, count = 0, num, a=1, b=1;
	cout << "Enter your number: "; cin >> limit;
	num = limit - 2 / 2;
	while (count<=num)
	{
		cout << a<<" ";
		a = first + 2;
		first = a;
		cout << limit<<" ";
		b = limit - 3;
		limit = b;
		count++;
	}
	return 0;
}