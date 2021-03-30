#include<iostream>
using namespace std;
int main()
{
	char arr[100];
	int size = 0, space = 0;
	cout << "Enter your sentence." << endl;
	cin.getline(arr, 100);
	while (arr[size]!='\0')
	{
		size++;
	}
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 32&&arr[i]!='\0')
		{
			cout << "%20";
		}
		else
		{
			cout << arr[i];
		}
	}
	cout<<endl;
}