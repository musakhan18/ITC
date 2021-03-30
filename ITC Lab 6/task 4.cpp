#include<iostream>
using namespace std;
int main()
{
	int num=-2, min =9999999, max = 0;
	while (num != 0)
	{
		if (num != 0)
		{

			cout << "enter number: "; cin >> num;
			if (num < min)
			{
				max = num;
			}
			if (num > max)
			{
				min = num;
			}
		}
	}
	cout << "maximum number is " << max << endl;
	cout << "minimum number is " << min << endl;
}