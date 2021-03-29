#include<iostream>
using namespace std;
int main()
{
	char arr1[500], arr2[500], arr[1000];
	int count1 = 0, count2 = 0, count;
	cout << "Enter first array" << endl;
	cout << "------------------" << endl;
	cin.getline(arr1, 500);
	while (arr1[count1]!='\0')
	{
		count1++;
	}
	cout << "Enter second array" << endl;
	cout << "-------------------" << endl;
	cin.getline(arr2, 500);
	while (arr2[count2] != '\0')
	{
		count2++;
	}
	count = count1 + count2;
	for (int i = 0; i < count1; i++)
	{
		arr[i] = arr1[i];
	}
	for (int i = 0, k = count1; k <count && i < count2; i++, k++)
	{
		arr[k] = arr2[i];
	}
	cout << endl;
	cout << "Array after merging" << endl;
	cout << "---------------------" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << arr[i]<<" ";
	}
	for (int i = 0; i < count; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			if (arr[j] < arr[i])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << endl;
	cout << endl;
	cout << "Array after sorting in alphabetic order." << endl;
	cout << "------------------------------------------" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}