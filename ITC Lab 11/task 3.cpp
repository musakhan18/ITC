#include<iostream>
using namespace std;
int main()
{
	const int size = 10;
	int arr[size], even, odd;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		
	}
	cout << "Numbers are" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Even numbers are" << endl;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			even = arr[i];
			cout << even << " ";
		}
	}
	cout << endl;
		cout << "odd numbers are" << endl;
		for (int i = 0; i < size; i++)
		{
			if (arr[i] % 2 != 0)
			{
				odd = arr[i];
				cout << odd << " ";
			}
		}
	
}