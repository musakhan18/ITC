#include<iostream>
using namespace std;
int main()
{
	
	int arr[15], count = 0, duplicate=0, change,t=0;
	cout << "Enter array." << endl;
	cout << "............." << endl;
	for (int i = 0; i < 15; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	for (int i = 0; i < 15; i++)
	{
		for (int j = i + 1; j < 15; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
				 duplicate=arr[i];
			}
			
			
		}
		if (count!=0)
		{
			
			cout <<"'"<< duplicate << "' has '" << count << "' duplicate" << endl;
			while (count!=0)
			{
				for (int d = i + 1; d < 15; d++)
				{
					if (arr[i]==arr[d])
					{
						cout << "Enter the number to replace '" << duplicate << "' : "; cin >> change;
						while (t < 15)
						{
							if (arr[t] == change)
							{
								cout << change << " is already present in the array ENTER A NEW UNIQUE NUMBER: "; cin >> change;
								
							}
							t++;
						}
						arr[d] = change;
					}
				}
				count--;
			}
		}
	}
	cout << endl;
	cout << "New Unique Array." << endl;
	cout << "...................." << endl;
	for (int i = 0; i < 15; i++)
	{
		cout << arr[i] << " ";
	}

}
