#include<iostream>
using namespace std;
int main()
{
	int RollNo, m, p, c, total;
	cout << "Enter Roll No.: " ;
	cin >> RollNo;
	cout << "Enter your Physics Marks: " ;
	cin >> p;
	cout << "Enter your Chemistry Marks: " ;
	cin >> c;
	cout << "Enter your Maths Marks: " ;
	cin >> m;
	total = p + c + m;
	cout << "\t \t \t \t \t \t ****************" << endl;
	cout << "\t \t \t \t \t \t   Result Sheet" << endl;
	cout << "\t \t \t \t \t \t ****************" << endl;
	cout << " Student Roll No.\t \t Phisics \t Chemistry \t Maths \t \t Total" << endl;
	cout << "-----------------------------------------------------------------------------------------------" << endl;
	cout << "      " << RollNo; cout << "                           " << p; cout << "               " << c; cout << "            " << m; cout << "             " << total<<endl;
	cout << "-----------------------------------------------------------------------------------------------" << endl;
}