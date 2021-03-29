#include<iostream>
using namespace std;
int main()
{
	double x1, y1, x2, y2, x3, y3, x4, y4, P, x, y;
	cout << "Enter x1 and y1" << endl; cin >> x1 >> y1;
	cout << "Enter x2 and y2" << endl; cin >> x2 >> y2;
	cout << "Enter x3 and y3" << endl; cin >> x3 >> y3;
	cout << "Enter x4 and y4" << endl; cin >> x4 >> y4;
	cout << "Enter x and y of point P" << endl; cin >> x >> y;

	if (x1 < x && x2 < x && x3 < x && x4 < x && y1 < y && y2 < y && y3 < y && y4 < y)
	{
		cout << "P is not inside rectangle." << endl;
	}
	else
	{
		cout << "P is inside rectangle." << endl;
	}
	return 0;
}