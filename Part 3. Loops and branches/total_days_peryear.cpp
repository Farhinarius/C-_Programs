// Days_in _the_year.cpp
//

#include "pch.h"
#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////

int main()
{
	int month, day, total_days;
	int days_per_month[12] = { 31, 28 , 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	cout << "\n Input number of month: ";
	cin >> month; 
	cout << "\n Input number of day: ";
	cin >> day;
	total_days = day;
	for (int i = 0; i < month - 1; i++) {
		total_days += days_per_month[i];
	}
	cout << "\n Number of days in cont. year: " << total_days << endl;
	return 0;
}

