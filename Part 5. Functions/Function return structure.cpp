// return_structure.cpp
//

#include <iostream>
using namespace std;

///////////////////////////////
struct Distance
{
	int feet;
	int inches;
};
/////////////////////////////

Distance return_new_distance(Distance, Distance);
void engl_disp(Distance dd);

void main() // main program;
{
	Distance d1, d2, d3;
	cout << "\nEnter Distance 1 count:" << endl; cin >> d1.feet; cin >> d1.inches;
	cout << "\nEnter Distance 2 count:" << endl; cin >> d2.feet ; cin >> d2.inches;
	d3 = return_new_distance(d1,d2);
	cout << endl;
	engl_disp(d1); cout << "+";
	engl_disp(d2); cout << "=";
	engl_disp(d3); cout << endl;
}

Distance return_new_distance(Distance dd1, Distance dd2)
{
	Distance dd3;
	dd3.inches = dd1.inches + dd2.inches;
	dd3.feet = 0;
	while (dd3.inches >=12) { dd3.inches -= 12; dd3.feet++; }
	dd3.feet += dd1.feet + dd2.feet;
	return dd3;

}

void engl_disp(Distance dd)
{
	cout << dd.feet << "\'-" << dd.inches << "\"";
}