// inliner.cpp
// применение встроенных функций

#include <iostream>
using namespace std;
// функция lbstokg()

// переводит фунты в килограммы
inline float lbstokg(float pounds)
{
	return 0.453592 * pounds;
}

//--------------------------------------------------------
int main()
{
	float lbs;
	cout << "\nEnter mass in pounds: ";
	cin >> lbs;
	cout << " " << lbstokg(lbs) << endl;
	return 0;
}