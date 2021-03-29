#include<iostream>
using namespace std;
int main()
{
	int arr[11], temp, first, second, WinTeam = 0, WinScore = 0;
	for (int i = 1; i <11; i++)
	{
		cout << "Enter score of team " << i <<": "; cin >> arr[i];
	}
	cout << endl;
	for (int i = 1; i <11; i++)
	{
		for (int j = i + 1; j < 11; j++)
		{
			if (arr[j] < arr[i])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				if (WinScore < temp)
				{
					WinTeam = i;
					WinScore = temp;
				}
			}
	    }
	}
	cout << endl;
	cout << "winning team is Team " << WinTeam << endl; 
	cout<< "Winnig team score = " << WinScore << endl;
	return 0;
}