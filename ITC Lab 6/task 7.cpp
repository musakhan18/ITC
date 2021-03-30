#include<iostream>
using namespace std;
int main()
{
	int num, rev = 0, mode;
	cout << "Enter your number: "; cin >> num;
	while (num > 0)
	{
		mode = num % 10;
		rev = rev * 10 + mode;
		num = num / 10;
	}
	cout << rev << endl;
	return 0;
}