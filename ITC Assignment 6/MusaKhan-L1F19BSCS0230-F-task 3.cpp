#include<iostream>
using namespace std;
int main()
{
	char input[500], enc=0;
	int count = 0, num;
	cout << "Enter your message: ";
	cin.getline(input, 500);
	while (input[count]!='\0')
	{
		count++;
	}
	cout << "Enter the number you want to add: "; cin >> num;
	for (int i = 0; i < count; i++)
	{
		if (input[i]+num>'z')
		{
			enc = input[i] - 26 + num;
			cout << enc;
		}
		else if (input[i] + num <= 'z')
		{
			enc = input[i] + num;
			cout << enc;
		}
	}
	return 0;
}