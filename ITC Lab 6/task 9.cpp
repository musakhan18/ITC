#include<iostream>
using namespace std;
int main()
{
	int AccNum, Con, first; float bill, Bser, Pch;
	cout << "Enter your account number: "; cin >> AccNum;
	cout << endl;
	if (AccNum%2==0)
	{
		cout << "Enter the number of premium channels: "; cin >> Pch;
		Pch = Pch * 7.50;
		cout << endl;
		cout << " Bill processing fee: $4.50" << endl;
		cout << " Basic service fee: $20.50" << endl;
		cout << " Premium channels: $7.50 per channel." << endl;
		cout << endl;
		bill = Pch + 4.50 + 20.50;
		cout << "Your bill is: " << bill << endl;
	}
	else
	{
		cout << "Enter the number of premium channels: "; cin >> Pch;
		cout << "Enter the number of your connections: "; cin >> Con;
		if (Con>10)
		{
			first = Con - 10;
			Bser = (Con - first) * 75;
			Pch = Pch * 50;
			cout << "Bill processing fee: $15.00" << endl;
			cout << "Basic service fee: $75.00 for first 10 connections, $5.00 for each additional connection" << endl;
			cout << "Premium channels: $50.00 per channel for any number of Connections." << endl;
			bill = Pch + 15 + (first * 5) + Bser;
			cout << "your bill is: " << bill << endl;
		}
		else
		{
			Bser = Con * 75;
			Pch = Pch * 50;
			cout << "Bill processing fee: $15.00" << endl;
			cout << "Basic service fee: $75.00 for first 10 connections, $5.00 for each additional connection" << endl;
			cout << "Premium channels: $50.00 per channel for any number of Connections." << endl;
			bill = Pch + 15 + Bser;
			cout << "your bill is: " << bill << endl;
		}
	}
	return 0;
}