#include<iostream>
using namespace std;
int main()
{
	const int size = 10;
	int arr[size];float even,odd, ceven=0, aeven, seven = 0, codd=0, aodd, sodd = 0, cieven=0, aieven, sieven = 0, ciodd=0, aiodd, siodd = 0;
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
	cout << endl;
	cout << "numbers on even index are" << endl;
	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
		{
			cout << arr[i] << " ";
			sieven += arr[i];
			cieven++;
		}
	}
	cout << endl;
	aieven = sieven / cieven;
	cout << "average of even index numbers are: " << aieven << endl;
	cout << endl;
	cout << "numbers on odd index are" << endl;
	for (int i = 0; i < size; i++)
	{
		if (i % 2 != 0)
		{
			cout << arr[i] << " ";
			siodd += arr[i];
			ciodd++;
		}
	}
	cout << endl;
	aiodd = siodd / ciodd;
	cout << "average of odd index numbers is: " << aiodd << endl;
	cout << endl;
	cout << "Even numbers are" << endl;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			even = arr[i];
			cout << even << " ";
			seven += even;
			ceven++;
		}
	}
	aeven = seven / ceven;
	cout << endl;
	cout << "Average of even numbers is: " << aeven << endl;
	cout << endl;
	cout << "odd numbers are" << endl;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0)
		{
			odd = arr[i];
			cout << odd << " ";
			sodd += odd;
			codd++;
		}
	}
	cout << endl;
	aodd = sodd / codd;
	cout << "average of odd numbers is: " << aodd << endl;
}