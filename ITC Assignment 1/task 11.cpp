#include<iostream>
using namespace std;
int main()
{
	int Q1, Q2, Q3, AverageMarks, TotalMarks;
	cout << "Marks of quiz 1 = "; cin >> Q1;
	cout << "Marks of quiz 2 = "; cin >> Q2;
	cout << "Marks of quiz 3 = "; cin >> Q3;
	TotalMarks = Q1 + Q2 + Q3;
	cout<<"Total Marks = " << TotalMarks << endl;
	AverageMarks = TotalMarks / 3;
	cout << "Average Marks = " << AverageMarks << endl;
	return 0;

}