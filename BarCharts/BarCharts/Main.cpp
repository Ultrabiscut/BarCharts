#include <iostream>
using namespace std;

//Program: BarCharts
//Author: Tyler Timmins
//Class: ITSE 1307 2002
//Description: Program that prompts the user to enter a number
// then displays that number of asterisks.


int main()
{
	//declare variables
	int iNum;

	//get input
	cout << "Enter a number: ";
	cin >> iNum;

	//for loop
	for (int x = 1; x <= iNum; x++)
	{
		cout << "* ";
	}
	cout << endl << endl;

	return 0;
}