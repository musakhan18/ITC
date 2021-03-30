#include <iostream>
using namespace std;
int main()
{
	char arr[255];
	int size = 0, space = 0, word = 0, w = 0;
	cout << "Enter your sentence." << endl;
	cin.getline(arr, 255);
	while (arr[size] != '.')
	{
		if (arr[size] == 32)
		{
			space++;
			
		}
		else
		{
			word++;
			if (word==3)
			{
				w++;
			}
		}
		size++;
		
	}

	cout << "Number of space in sentence: " << space << endl;
	cout << "Number of words: " << space + 1 << endl;
	cout << "lenght of sentence: " << size << endl;
	cout << "Lenght of Words: " << word << endl; ;
	

	return 0;
}