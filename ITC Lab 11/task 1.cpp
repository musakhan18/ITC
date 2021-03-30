#include<iostream>
using namespace std;
int main()
{
	const int size = 10;
	int arr[size], temp;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}

	cout << "array in straight order" << endl;
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		cout << "-----------------------------" << endl;
		cout << "array in reverse order" << endl;
		for (int i = size-1; i >-1; i--)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		cout << "-----------------------------" << endl;
		return 0;
}
			