// using_returning_function.cpp
//

#include "pch.h"
#include <iostream>
float pnds_to_kgs(float);
using namespace std;

void main()
{
	float pnds, kgs;
	cout << "\n Enter pound count:" << endl;
	cin >> pnds;
	kgs = pnds_to_kgs(pnds);
	cout << "Killogram count:" << kgs << endl;

}
float pnds_to_kgs(float pounds)
{
	float killogram = 0.53485 * pounds;
	return killogram;
}



