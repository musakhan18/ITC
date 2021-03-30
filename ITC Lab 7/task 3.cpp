#include<iostream>
using namespace std;
int main()
{
	float amount =1000, count = 1,total;float inter;
	while (count <= 10)
	{
		inter = amount*0.08;
		total = amount + inter;
		cout << " amount of money at the end of year " << count << ": "<<total << endl;
		amount = total;
		count++;
	}
	return 0;
}