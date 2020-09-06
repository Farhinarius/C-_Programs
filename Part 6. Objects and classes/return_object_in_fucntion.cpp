// Program name.cpp or task;
// options;

#include <iostream>
using namespace std;


class Distance
{
private:
	int feet;
	float inches;
public:
	//---------------Constructor Init------------------//
	Distance() : feet(0), inches(0)
	{};
	Distance(int fn, float in) : feet(fn), inches(in)
	{};
	
	//----------------Input Distance------------------//
	void console_input()
	{
		cout << "\nEnter new value of distance: " << endl; cin >> feet; cin >> inches;
 	}
	
	//----------------Show Distance------------------//
	void show_dist()
	{
		{ cout << feet << "\'-" << inches << '\"'; }
	}
	Distance add_dist(Distance);
};

Distance Distance::add_dist(Distance dd2) // returning object;
{
	Distance temp;
	temp.feet = 0;
	temp.inches = inches + dd2.inches;
	while (inches >= 12)
	{
		temp.inches -= 12;
		temp.feet += 1;
	}
	temp.feet = feet + dd2.feet;
	
	return temp;
}

void main()
{
	Distance dist1, dist3; // init -0- objects dist1 and dist3
	Distance dist2(3, 55); // dist2 init with constructor arguements;
	dist1.console_input();        // console_input      
	dist3 = dist1.add_dist(dist2);  // we use constructor copy opportunity also(3,55)
	// вывод всех длин
	cout << "\ndist1 = "; dist1.show_dist();
	cout << "\ndist2 = "; dist2.show_dist();
	cout << "\ndist3 = "; dist3.show_dist();
	cout << endl;
}
	
