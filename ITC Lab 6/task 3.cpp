#include<iostream>
using namespace std;
int main()
{
	int num, count=1;
	cout << "enter a 7 digit number: "; cin >> num;
	if (num<=9999999)
		{
			num = num / 10;
			cout << num << endl;

			num = num / 10;
			cout << num << endl;

			num = num / 10;
			cout << num << endl;

			num = num / 10;
			cout << num << endl;

			num = num / 10;
			cout << num << endl;

				num = num / 10;
				cout << num << endl;

		}
	return 0;
}