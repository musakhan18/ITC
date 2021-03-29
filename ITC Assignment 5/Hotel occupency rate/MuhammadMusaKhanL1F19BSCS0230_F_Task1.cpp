#include <iostream>
using namespace std;
int main()
{
	float rooms = 0, TotalRooms = 0, TotalFloors = 0, OccupiedRooms , TotalOccRooms = 0, Rate ;
	cout << "Enter number of floors: "; cin >> TotalFloors;
	while (TotalFloors <1)
	{
		cout << "Enter number of floors: "; cin >> TotalFloors;
	}
	for (int i = 1; i <= TotalFloors; i++)
	{
		if (i != 13)
		{
			cout << "Enter number of roomes of floor " << i << " : "; cin >> rooms;

			cout << "Enter number of occupied roomes of floor " << i << " : "; cin >> OccupiedRooms;
			TotalRooms += rooms;
			TotalOccRooms += OccupiedRooms;
		}
	}
	Rate = (TotalOccRooms / TotalRooms) * 100;
	cout << endl;
	cout << "total numbers of floors: " << TotalFloors << endl;
	cout << "total number of rooms: " << TotalRooms << endl;
	cout << "total number of occupied rooms: " << TotalOccRooms << endl;
	cout << "total number of unoccupied rooms: " << TotalRooms - TotalOccRooms << endl;
	cout << "percentage of occupied rooms: " << Rate << "%" << endl;
	return 0;
}