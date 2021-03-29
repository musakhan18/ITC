#include <iostream>
using namespace std;
int main()
{
	int origNum, num, remain, sum=0;
	cout << "Enter a number: ";
	cin >> origNum;
	num = origNum;
	while (num != 0)
	{
		remain = num % 10;
		sum += remain * remain * remain;
		num /= 10;
	}
	if (sum == origNum)
	{
		cout << origNum << " is an Armstrong number.";
	}
	else
	{
		cout << origNum << " is not an Armstrong number.";
	}
	return 0;
}