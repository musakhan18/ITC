#include<iostream>
using namespace std;
int main()
{
	int ch1 , ch2 , ch3, ch4, ch5,TcreditHours;
	cout << "Credit Hours of ITC are: ";
	cin >> ch1;
	cout << "Credit Hours of Lab are: ";
	cin >> ch2;
	cout << "Credit Hours of ENG-1 are: ";
	cin >> ch3;
	cout << "Credit Hours of BasicElectronics are: ";
	cin >> ch4;
	cout << "Credit Hours of IRS are: ";
	cin >> ch5;
	TcreditHours = ch1 + ch2 + ch3 + ch4 + ch5;
	cout << "Your Total Credit Hours Are: " << TcreditHours << endl;
	return 0;
}