#include<iostream>
using namespace std;
int main()
{
	float Stu[6], Quiz1[6], Quiz2[6], Quiz3[6], Quiz4[6], Quiz5[6], QS[6], QMax = 0, Qs, Qper[6], ResultMax = 0;
	float Ass1[6], Ass2[6], Ass3[6], Ass4[6], AssSt[6], AssMax = 0, AS, Aper[6], Mper[6], Pper[6], maxst;
	float Mid[6], Final[6], Proj[6], MidMax = 0, FMax = 0, PMax = 0, PS, MS, FS, Fper[6], Result[6];
	cout << "Enter marks of Quiz1" << endl;
	for (int i = 1; i < 6; i++)
	{
		cout << "Enter marks of quiz1 of student " << i << ": "; cin >> Quiz1[i];
	}
	cout << endl;
	cout << "Enter marks of Quiz2" << endl;
	for (int i = 1; i < 6; i++)
	{
		cout << "Enter marks of quiz2 of student " << i << ": "; cin >> Quiz2[i];
	}
	cout << endl;
	cout << "Enter marks of Quiz3" << endl;
	for (int i = 1; i < 6; i++)
	{
		cout << "Enter marks of quiz3 of student " << i << ": "; cin >> Quiz3[i];
	}
	cout << endl;
	cout << "Enter marks of Quiz4" << endl;
	for (int i = 1; i < 6; i++)
	{
		cout << "Enter marks of quiz4 of student " << i << ": "; cin >> Quiz4[i];
	}
	cout << endl;
	cout << "Enter marks of Quiz5" << endl;
	for (int i = 1; i < 6; i++)
	{
		cout << "Enter marks of quiz5 of student " << i << ": "; cin >> Quiz5[i];
	}
	for (int i = 1; i < 6; i++)
	{
		QS[i] = Quiz1[i] + Quiz2[i] + Quiz3[i] + Quiz4[i] + Quiz5[i];
		Qper[i] = QS[i] / 50 * 15;
		if (QS[i] > QMax)
		{
			QMax = QS[i];
			Qs = i;
		}
	}
	cout << endl;
	
		cout << "Enter marks of Assignment 1." << endl;
		for (int i = 1; i < 6; i++)
		{
			cout << "Enter Marks of Assignment 1 of student " << i << ": "; cin >> Ass1[i];
		}
		cout << endl;
		cout << "Enter marks of Assignment 2." << endl;
		for (int i = 1; i < 6; i++)
		{
			cout << "Enter Marks of Assignment 2 of student " << i << ": "; cin >> Ass2[i];
		}
		cout << endl;
		cout << "Enter marks of Assignment 3." << endl;
		for (int i = 1; i < 6; i++)
		{
			cout << "Enter Marks of Assignment 3 of student " << i << ": "; cin >> Ass3[i];
		}
		cout << endl;
		cout << "Enter marks of Assignment 4." << endl;
		for (int i = 1; i < 6; i++)
		{
			cout << "Enter Marks of Assignment 4 of student " << i << ": "; cin >> Ass4[i];
		}
		for (int i = 1; i < 6; i++)
		{
			AssSt[i] = Ass1[i] +Ass2[i] + Ass3[i] + Ass4[i] ;
			Aper[i] = AssSt[i] / 100 * 15;
			if (AssSt[i] > AssMax)
			{
				AssMax = AssSt[i];
				AS = i;
			}
		}
		cout << endl;
		cout << "Enter Marks of Mids" << endl;
		for (int i = 1; i < 6; i++)
		{
			cout << "Enter marks of mids of Student " << i << ": "; cin >> Mid[i];
			Mper[i] = Mid[i] / 100 * 25;
			if (Mid[i] > MidMax)
			{
				MidMax = Mid[i];
				MS = i;
			}
		}
		cout << endl;
		cout << "Enter Marks of Project" << endl;
		for (int i = 1; i < 6; i++)
		{
			cout << "Enter marks of Project of Student " << i << ": "; cin >> Proj[i];
			Pper[i] = Proj[i] / 100 * 25;
			if (Proj[i] > PMax)
			{
				PMax = Proj[i];
				PS = i;
			}
		}
		cout << endl;
		cout << "Enter Marks of Finals." << endl;
		for (int i = 1; i < 6; i++)
		{
			cout << "Enter marks of Finals of Student " << i << ": "; cin >> Final[i];
			Fper[i] = Final[i] / 100 * 25;
			if (Final[i] > FMax)
			{
				FMax = Final[i];
				FS = i;
			}
		}
		
		for (int i = 1; i < 6; i++)
		{
			Result[i] = Qper[i] + Aper[i] + Mper[i] + Pper[i] + Fper[i];
			cout << "Result of student " << i << " is: " << Result[i] <<"%"<< endl;
			if (Result[i] > ResultMax)
			{
				ResultMax = Result[i];
				maxst = i;
			}
		}
		cout << endl;
		cout << "Top scorer in Quizes is Student " << Qs << endl;
		cout << "Student " << Qs << " Marks: " << QMax << endl;
		cout << endl;
		cout << "Top scorer in Assignments is Student " << AS << endl;
		cout << "Student " << AS << " Marks: " << AssMax << endl;
		cout << endl;
		cout << "Top scorer in Mids is Student " << MS << endl;
		cout << "Student " << MS << " Marks: " << MidMax << endl;
		cout << endl;
		cout << "Top scorer in Project is Student " << PS << endl;
		cout << "Student " << PS << " Marks: " << PMax << endl;
		cout << endl;
		cout << "Top scorer in Finals is Student " << FS << endl;
		cout << "Student " << FS << " Marks: " <<FMax << endl;
		cout << endl;
		cout << "Overall Topper of the group is Student " << maxst << endl;
		cout << "Student " << maxst << " Marks: " << ResultMax <<"%"<< endl;
		 
		return 0;

}