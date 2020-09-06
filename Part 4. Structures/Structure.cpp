// structure.cpp
// ---------0----------------

#include <iostream>
#include <iomanip>
using namespace std;

struct Distance 
{
	int feet;
	float inches;
};

int main()
{
	Distance dis1, dis3;
	Distance dis2 = { 12,7.5 };

	cout << "\n Input feet dis_1: "; cin >> dis1.feet;
	cout << "\n Input inches dis_1: "; cin >> dis2.inches;

	dis3.inches = dis1.inches + dis2.inches;
	dis3.feet = 0;
	if (dis3.inches >= 12)
	{
		dis3.inches -= 12;
		dis3.feet++;
	}
	dis3.feet += dis1.feet + dis2.feet;
	cout << dis1.feet << "\'-" << dis1.inches;
	cout << dis2.feet << "\'-" << dis2.inches;
	cout << dis3.feet << "\'-" << dis3.inches;
	return 0;
}