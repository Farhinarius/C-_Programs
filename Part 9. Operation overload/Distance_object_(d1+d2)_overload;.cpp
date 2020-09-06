// Distance_object_(d1+d2)_overload;
// options;

#include <iostream>
#include <string>
using namespace std;

///////////////////////////////////////////////////////
class Distance
{
private:
	int feet;  
	float inches;
public:
	// init "0" constructor
	Distance() :feet(0), inches(0) 
	{};
	// constructor with some parametres
	Distance(int ft, float inch) : feet(ft), inches(inch) 
	{};
	// input information about distance
	void get_dist() 
	{
		cout << "\n Enter feet: "; cin >> feet;
		cout << " Entet inches: "; cin >> inches;
	}
	// console output information about Distance
	void show_dist()
	{
		cout << feet << "\'-" << inches << '\"' << endl;
	}
	Distance operator+(Distance) const;
};
////////////////////////////////////////////////////
Distance Distance::operator+(Distance d2) const           //overload operator, where we return distance object
{
	int f = feet + d2.feet;            // summ of using object and right operator object
	float i = inches + d2.inches;
	while (i >= 12)       // translate into feet, if (i) more then 12
	{
		f++;
		i -= 12;
	}
	return Distance(f, i);  // return new object with argum "f" and "i";
}
/////////////////////////////////////////////////////
int main()
{
	Distance dist1, dist3, dist4;      // constructor "0" init
	cout << "\n Enter d1 value-> ";
	dist1.get_dist();        // Input dist1 object inf
	Distance dist2(8, 6.5);  // constructor sinple init
	dist3 = dist1 + dist2;   // overload summ operator+(Distance d2)
	dist4 = dist1 + dist2 + dist3; // overload summ operator+(Distance d2)
	cout << "/--------------------------------/" << endl;
	dist3.show_dist();  // dist3 console output
	dist4.show_dist();  // dist 4 console output
	return 0;
}