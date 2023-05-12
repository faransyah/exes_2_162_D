#include <iostream>
using namespace std;


int faran[31]; 
int n; 
int i; 


void input()
{
	while (true)
	{
		cout << "Enter the number od elements in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 31))
			break;
		else
			cout << "\nArray should have minimum 1 and macimum 31 elements.\n\n";
	}

	cout << "\n---------------------\n";
	cout << " Enter array elements \n";
	cout << "\n---------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> faran[i];
	}
}



void LinearSearch()
{
	char ch;
	int comparison; 

	do
	{
		cout << "\nEnter the element you want to search: "; 
		int item;
		cin >> item;

		comparison = 0;
		for (i = 0; i < n; i++)              
		{
			comparison++;
			if (faran[i] == item)               
			{
				cout << "\n" << item << " found at position " << (i + 1) << endl;
				break;
			}
		}

		if (i == n)
			cout << "\n" << item << " not found in the array\n";
		cout << "\nNumber of comparisons: " << comparison << endl;

		cout << "\nContinue search (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));
}

int main()
{
	input();
	LinearSearch();
}