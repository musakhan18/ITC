#include<iostream>
using namespace std;
int main()
{
	int TotalStudents = 45, boys = 25, girls;
	cout << "total students are: 45" << endl;
	cout << "number of boys are: 25" << endl;
	girls = TotalStudents - boys;
	cout << "number of girls are: " << girls << endl;
	cout << "students obtained \"A\" grade: 80%" << endl;
	cout << "number of boys obtained \"A\" grade: 17" << endl<<endl;
	girls = 45 * 80 / 100;
	girls = girls - 17;
	cout << "number of girls obtained \"A\" grade:  " << girls << endl;
	return 0;
}