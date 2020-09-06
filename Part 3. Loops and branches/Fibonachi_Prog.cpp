// FibonachiProg.cpp
//
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a, b, c;
	a = 1; b = 1; c = 0;
	cout << a << " " << b << " ";
	for (int i = 1; i <= 3; i++) {
		c = a + b;
		cout << c << " ";
		a = b + c;
		cout << a << " ";
		b = a + c;
		cout << b << " ";
	}
	return 0;
}

