#include<iostream>
using namespace std;
int main()
{
	int num, first = -1, sec = 1, count = 0, sum = 0;
	cout << "Enter number: "; cin >> num;
	while (count<=num)
	{
		sum = first + sec;
		first = sec;
		sec = sum;
		count++;
	}
	cout << sum << endl;
	return 0;
}