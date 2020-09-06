// f_cube--gallon.cpp
// task_1

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	float gallon;
	cout << "Input count of gallon: ";
	cin >> gallon;
	float f_cube = gallon / 7.4;
	cout << "f_cube count: " << f_cube;
	return 0;
}