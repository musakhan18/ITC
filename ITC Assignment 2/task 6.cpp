#include<iostream>
using namespace std;
int main()
{
	float x1, y1, x2, y2, x3, y3, x4, y4, side1, side2, side3, side4;
	cout << "Enter x1 and y1: " << endl; cin >> x1 >> y1;
	cout << "Enter x2 and y2: " << endl; cin >> x2 >> y2;
	cout << "Enter x3 and y3: " << endl; cin >> x3 >> y3;
	cout << "Enter x4 and y4: " << endl; cin >> x4 >> y4;

	side1 = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	side2 = sqrt(((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2)));
	side3 = sqrt(((x4 - x3) * (x4 - x3)) + ((y4 - y3) * (y4 - y3)));
	side4 = sqrt(((x1 - x4) * (x1 - x4)) + ((y1 - y4) * (y1 - y4)));

	if (side1 == side2 && side1 == side3 && side1 == side4 || side2 == side1 && side2 == side3 && side2 == side4 || side3 == side1 && side3 == side2 && side3 == side4 || side4 == side1 && side4 == side2 && side4 == side3)
	{
		cout << "Square." << endl;
	}

	else if(side1 == side3 && side2 == side4 || side3 == side1 && side4 == side2)
	{
		cout << "Rectangle." << endl;
	}

	else if (side1 != side2 && side1 != side3 && side1 != side4 && side2 != side1 && side2 != side3 && side2 != side4 && side3 != side1 && side3 != side2 && side3 != side4 && side4 != side1 && side4 != side2 && side4 != side3)
	{
		cout << "Quadilatral." << endl;
	}
	return 0;
}