#include<iostream>
using namespace std;
int main()
{
	int num, sum = 0, count = 0; float ave = 0;
	while (num != -1)
	{
		
		cout << "enter numbers: "; cin >> num;
		if (num != -1)
		{
			sum = sum + num;
			count++;
		}
	}
	ave = sum / count;
	cout << "sum = " << sum << endl;
	cout << "average = " << ave << endl;
	return 0;
}