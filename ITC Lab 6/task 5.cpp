#include<iostream>
using namespace std;
int main()
{
	
	for (int num = 0; num < 10; num++)
	{
		int  fact = 1, mul;
		mul = num;
		while (mul > 0)
		{
			fact = fact * mul;
			mul--;
		}
		cout << num; cout << "!=";
		cout << fact << endl;
	}
}