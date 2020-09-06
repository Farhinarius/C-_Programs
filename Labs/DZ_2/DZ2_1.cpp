// Program name.cpp or task;
// options;

#include <iostream>
using namespace std;

////////////////////////////////
int nod(int x, int y)
{
	while (x != y)
		if (x > y) x = x - y;
		else y = y - x;
	return y;
}
////////////////////////////////
int nok(int x, int y, int d)
{
	return (x*y) / d;
}

void main()
{
	
	int n1, n2, d, k;
	cout << "\n Enter two numbers: " << endl;
		cin >> n1; cin >> n2;
		d = nod(n1, n2);
		k = nok(n1, n2, d);
		cout << "\n NOD = " << d << endl;
		cout << "\n NOK = " << k << endl;
}