// InputN.cpp
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	int k = 0;
	int sum = 0;
	float avrg = 0;

	cout << "\n Input Num_s: \n";
	while (num != 0)
	{
		cin >> num;
		k += 1;
		sum += num;

	}
	avrg = (sum / k);
	cout << "\n K elements: " << k << endl;
	cout << " Summ of elements: " << sum << endl;
	cout << " Average count: " << avrg << endl;
	return 0;
}
