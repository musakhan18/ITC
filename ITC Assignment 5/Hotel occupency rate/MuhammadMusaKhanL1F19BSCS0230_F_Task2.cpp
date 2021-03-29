#include<iostream>
using namespace std;
int main()
{
	int arr[100], temp = 0, sum = 0, num, sum1 = 0, sum2 = 0;
	cout << "Enter the total number of  quizzes (2 - 100): "; cin >> num;
	if (num > 1)
	{
		arr[0] = 40;
		cout << "Enter the marks of quizes before midterm: " << endl;
		cout << "-------------------------------------------" << endl;
		for (int i = 1; i <= num / 2; i++)
		{
			cout << "Quize " << i << " = "; cin >> arr[i];
		}
		for (int i = 1; i <= num / 2; i++)
		{
			for (int j = i + 1; j <= num / 2; j++)
			{
				if (arr[j] < arr[i])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
			sum1 += arr[i];
		}
		cout << "Marks before midterm after sorting" << endl;
		for (int i = 1; i <= num / 2; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		cout << "Sum of marks before midterm = " << sum1 << endl;
		cout << "-------------------------------------------" << endl;
		cout << "Marks of midterm = 40" << endl;
		cout << "Enter the marks of quizes after midterm: " << endl;
		cout << "-------------------------------------------" << endl;
		for (int i = 1 + num / 2; i <= num; i++)
		{
			cout << "Quize " << i << " = "; cin >> arr[i];
		}
		for (int i = 1 + num / 2; i <= num; i++)
		{
			for (int j = i + 1; j <= num; j++)
			{
				if (arr[j] > arr[i])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
			sum2 += arr[i];
		}
		cout << "Marks after midterm after sorting" << endl;
		for (int i = 1 + num / 2; i <= num; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		cout << "Sum of marks after midterm = " << sum2 << endl;
		cout << "-------------------------------------------" << endl;
		cout << endl;
		cout << "Marks after sorting from lowest to highest" << endl;
		for (int i = 0; i < num + 1; i++)
		{
			for (int j = i + 1; j < num + 1; j++)
			{
				if (arr[j] < arr[i])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		for (int i = 0; i < num + 1; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		cout << "------------------------------------------" << endl;
		for (int i = 0; i < num + 1; i++)
		{
			for (int j = i + 1; j < num + 1; j++)
			{
				if (arr[j] > arr[i])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
			sum += arr[i];
		}
		cout << endl;
		cout << "Marks after sorting from highest to lowest" << endl;
		for (int i = 0; i < num + 1; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		cout << "------------------------------------------" << endl;
		cout << "Total marks = " << sum << endl;
	}
	else
	{
	cout << "Number should be greater then 1 and less then 100 " << endl;
	cout << "Please ReEnter then number: "; cin >> num;
	}
	return 0;
}