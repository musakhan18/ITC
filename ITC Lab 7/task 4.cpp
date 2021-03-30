#include<iostream>
using namespace std;
int main()
{
	int year, month, tmonths, total;
	cout << "Enter -1 for exit." << endl;
	cout << endl;
	while (year != -1 )
	{
		cout << "Enter age of student in years: "; cin >> year;
		cout << "Enter age of student in months: "; cin >> month;
		total = year * 12;
		total = total + month;
		if (total >= 500)
		{
			cout << "***" << total << endl;
		}
		else
		{
			cout << "Age in months: " << total << endl;
		}
	}
}