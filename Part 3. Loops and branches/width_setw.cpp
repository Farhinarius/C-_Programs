// width.cpp
// manipulator SETW

#include "pch.h"
#include <iomanip> // setw operation
#include <iostream>
using namespace std;

int main()
{
	long pop_1 = 303214, pop_2 = 525697, pop_3 = 35654;
	cout << setw(9) << "City " << setw(12) <<  "   Population " << endl
		<< setw(9) << "Moscow: " << setw(12) << pop_1 << endl
		<< setw(9) << "Kirov: " << setw(12) << pop_2  << endl
		<< setw(9) << "Novigrad:" << setw(12) << pop_3 << endl;


	return 0;
}
