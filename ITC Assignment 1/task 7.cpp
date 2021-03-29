#include<iostream>
using namespace std;
int main()
{
	int BirthYear, CurrentYear,age;
	cout << "enter your birth year: ";
	cin >> BirthYear;
	cout << "enter current year: ";
	cin >> CurrentYear;
	age = CurrentYear - BirthYear;
	cout << "Your age is: " << age <<" years"<< endl;
	return 0;
}