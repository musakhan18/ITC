#include<iostream>
using namespace std;
int main()
{
	int a=78, b=45, c=62, TotalMarks;
	float TotalPercentage;
	cout << "Marks of Robert in three subjects are 78, 45 and 62. " << endl;
	cout << "Total Marks And Percentage Of Robert Is As Under!! " << endl;
	TotalMarks = a + b + c;
	cout << "Total marks are = " << TotalMarks << endl;
	TotalPercentage = TotalMarks /3;
	cout << "Total percentage is = " << TotalPercentage << "%" << endl;
	return 0;
}