// Lab_2.cpp 
 
#include <iostream> 
#include <cmath> 
using namespace std;

// —----------------------------------— //

int main()
{
	float x, y, a;
	cout << " Input x and y value: " << endl;
	cin >> x;
	cin >> y;
	a = (pow((abs(x - 1)), 1 / 2) - pow(y, 1 / 2)) / ((1 + pow(x, 2)) / (2 + pow(y, 2)) / (pow(y, 4)));
	cout << " Element a: " << a << endl;
	return 0;
}