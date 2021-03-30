#include<iostream>
using namespace std;
int main()
{
	int num = 1, i = 1;
	cout << "enter -1 for exit." << endl;
	while (i > 0 && num != -1)
	{
		cout << "Enter your number: "; cin >> num;
		while (i > 0 && num != -1)
		{
			if (i * i > num)
			{
				cout << num << " is not perfect square" << endl;
				break;
			}
			if (num == i * i)
			{
				cout << num << " is a perfect square of " << i << endl;
				break;
			}
			i++;
		}
	}
	return 0;
}