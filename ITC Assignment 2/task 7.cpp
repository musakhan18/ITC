#include<iostream>
using namespace std;
int main()
{
	double x1, y1, x2, y2, x3, y3, point1 , point2, point3;
	cout << "Enter x1 and y1" << endl; cin >> x1 >> y1;
	cout << "Enter x2 and y2" << endl; cin >> x2 >> y2;
	cout << "Enter x3 and y3" << endl; cin >> x3 >> y3;

	point1 = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
	point2 = ((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2));
	point3 = ((x1 - x3) * (x1 - x3)) + ((y1 - y3) * (y1 - y3));

	if (point1 == point2 && point2 == point3 && point3 == point1)
	{ 
		cout << " Equilateral Triangle. ";
	}
	if (point1  + point2 == point3  || point1 + point3  ==  point2 ||  point3 +  point2 == point1)
	{
		cout << " Right Angle Triangle. " << endl;
	}
	else if (point1 == point3 || point2 == point3 || point1 == point2)
	{
		cout << " Isoseles Triangle. ";
	}
	else
	{
		cout << " Scalene Triangle. " << endl;
	}
	
	return 0;  
}