#include<iostream>
using namespace std;
int main()
{
	const int size = 10;
	int arr[size], sum=0;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		sum += arr[i];
	}	
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "sum = " << sum << endl;
}