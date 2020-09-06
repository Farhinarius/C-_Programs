// prime.cpp
// include_process.h

#include <iostream>
#include <process.h>
using namespace std;

int main()
{
	unsigned long n, j;
	cout << " Input number:  ";
	cin >> n;
	for (j = 2; j <= n / 2; j++) {
		if (n % j == 0) { cout << " Number is not simple " << endl; exit(0); }
	 }
	cout << " The number is simple \n ";
		return 0;
}