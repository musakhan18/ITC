#include<iostream>
using namespace std;
int main()
{
	float num1,num2,num3,num4,num5, avg;
	cout << "enter your number of five subject"<<endl;
	cin >> num1;
	cin >> num2;
	cin >> num3;
	cin >> num4;
	cin >> num5;
	avg = num1 + num2 + num3 + num4 + num5 / 5;
	if (avg >= 40 && avg <= 49)
	{
		cout << "Grade D" << endl;
	}
	
	else if (avg >= 50 && avg <= 59)
	{
		cout << "Grade C" << endl;
	}
	else if (avg >= 60 && avg <= 69)
	{
		cout << "Grade B" << endl;
	}
	else if (avg >= 70 && avg <= 79)
	{
		cout << "Grade A" << endl;
	}
	else if (avg >= 80 && avg <= 100)
	{
		cout << "Grade A-1" << endl;
	}
	return 0;
}