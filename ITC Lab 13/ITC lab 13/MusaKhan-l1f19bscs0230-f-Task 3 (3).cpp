#include<iostream>
using namespace std;
int main()
{
	char arr[100];
	int size=0;
	cout << "Enter your sentence." << endl;
	cin.getline(arr, 100);
	while (arr[size] != '\0')
	{
		size++;
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] == arr[j])
			{
				arr[j] = 0;
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (arr[i] != 0)
		{
			cout << arr[i];
		}
	}
	cout << endl;
}