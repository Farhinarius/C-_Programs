// ex_6.cpp 
// trade_arena program

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int num;
	float pounds, franc, mark, jen, dollar;
	cout << " Input dollar value: ";
	cin >> dollar;
	cout << " Select one of the options: " << endl;
	cout << " 1.Transfer currency into pounds -- " << endl;
	cout << " 2.Transfer currency into franc  -- " << endl;
	cout << " 3.Transfer currency into mark --  " << endl;
	cout << " 4.Transfer currency into jen -- " << endl;
	cin >> num;

	switch (num) {
	case 1:
		pounds = dollar / 1.487; cout << " Pounds value: " << pounds << endl;
		break;
	case 2:
		franc = dollar / 0.172; cout << " Franc value: " << franc << endl;
		break;
	case 3:
		mark = dollar / 0.584; cout << " Mark value: " << mark << endl;
		break;
	case 4:
		jen = dollar / 0.00955; cout << " Jen value: " << jen << endl;
		break;
	}

	return 0;
}

