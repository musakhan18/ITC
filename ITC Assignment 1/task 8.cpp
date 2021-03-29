#include<iostream>
using namespace std;
int main()
{
	int Men, Wom, LitMen, ILitMen, TLitPop ,Tpop;
	cout << "enter the total population" << endl;
	cin >> Tpop;
	cout << "Percentage of men: 52%" << endl;
	Men = Tpop * 52 / 100;
	Wom = Tpop - Men;
	cout << "Total number of women: " << Wom << endl;
	cout << "percentage of total literacy: 48% " << endl;
	cout << "percentage of total literate men: 35%" << endl;
	TLitPop = 48 * Tpop / 100;
	LitMen = TLitPop * 35 / 100;
	ILitMen =Men- LitMen;
	cout << "Number of literate men: " << ILitMen << endl;
	return 0;

}