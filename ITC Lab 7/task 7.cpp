#include<iostream>
using namespace std;
int main()
{
	int num, start, end, x;
	cout << "Enter your number: "; cin >> num;
	cout << "Enter your starting number: "; cin >> start;
	cout << "Enter your ending number: "; cin >> end;
	while (start<=end)
	{
		x = num * start;
		cout << num << " * " << start << " = " << x << endl;
		start++;
	}
	return 0;
}