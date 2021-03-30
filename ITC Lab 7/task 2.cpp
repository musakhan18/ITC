#include<iostream>
using namespace std;
int main()
{
	int num, count = 1, sum = 0;
	cout << "Enter 1 for working days and 0 for free days" << endl;
	while (count <= 7)
	{
		
		cin >> num;
		sum = sum + num;
		count++;
		
	
	}
	if (sum <= 3)
	{
		cout << "#allcodersarefun" << endl;
	}
	else
	{
		cout << "#coderlifematters" << endl;
	}
	return 0;
	
}