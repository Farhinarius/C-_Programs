// while4.cpp

#include "pch.h"
#include <iostream> 
#include <iomanip> 
using namespace std;

int main()
{
	int n = 1;
	int quadra = 1;
	cout << " Input n numbers: " << endl;

	while (quadra < 10000) {
		cout << n << " - " << quadra << endl;
		++n;
		quadra = pow(n, 4);
	}
	return 0;
}