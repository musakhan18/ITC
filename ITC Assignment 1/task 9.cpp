#include<iostream>
using namespace std;
int main()
{
	int HoursPerWeek, ExtraHours, ExtraPay, Pay;
	cout << "Enter your working hours per week: " << endl;
	cin >> HoursPerWeek;
	if (HoursPerWeek >= 40)
	{
		cout << "Enter your extra working hours (if any): " << endl;
		cin >> ExtraHours;
		ExtraPay = ExtraHours * 25;
		Pay = HoursPerWeek * 13;
		Pay = Pay + ExtraPay;
		cout << "Your pay is: " << Pay << "$" << endl;
	}
	else
	{
		cout << "Your working hours are less then 40"<<endl;
		return 0;
	}
}