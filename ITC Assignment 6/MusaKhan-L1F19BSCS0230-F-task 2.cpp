#include<iostream>
using namespace std;
int main()
{
	int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, j;
	char arr1[100], arr2[100];
	cout << "Enter first array." << endl;
	cin.getline(arr1, 100);
	while (arr1[c1] != '\0')
	{
		c1++;
	}
	cout << "Enter second array." << endl;
	cin.getline(arr2, 100);
	while (arr2[c2] != '\0')
	{
		c2++;
	}
	c3 = c1 - c2;
	for (int i = 0; i < c3+1; i++)
	{
		for (j = 0; j < c2; j++,i++)
		{
			if (arr1[i] == arr2[j])
			{
				c4++;
			}
		}
		i = i - j;
		if (c4 == c2)
		{
			c5 = 1;
			cout << "Array2 is found in Array1" << endl;
			break;
		}
		c4 = 0;
	}
	if (c5==0)
	{
		cout << "Array2 is not found in Array1" << endl;
	}
	return 0;
	
}