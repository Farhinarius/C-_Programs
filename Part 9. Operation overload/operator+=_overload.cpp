// operator+=_overload.cpp;
// options._.

#include <iostream> 
using namespace std;

///////////////////////////////////////////////////////////
class Distance 
{
private:
	int feet;
	float inches;
public:
	// init "0" constructor
	Distance() : feet(0), inches(0.0)
	{ }
	//  constructor with some parametres
	Distance(int ft, float in) : feet(ft), inches(in)
	{ }
	// input information about distance
	void get_dist()
	{
		cout << "\n Enter feet: "; cin >> feet;
		cout << " Enter inches: "; cin >> inches;
	}
	// console output info
	void show_dist() const
	{
		cout << feet << "\'-" << inches << '\"';
	}
	// += operator function decloration
	void operator+=(Distance);
};
// += operator function
void Distance::operator+=(Distance d2)
{
	feet = feet + d2.feet;
	inches = inches + d2.inches;
	while (inches >= 12)
	{
		inches -= 12;
		feet++;
	}
}
int main()
{
	// d1 decloration object
	Distance d1;  
	d1.get_dist();
	cout << "\n d1 = "; d1.show_dist();

	// d2 decloration object with constructor
	Distance d2(7, 4.5);
	cout << "\n d2 = "; d2.show_dist();
	
	// operator += in class Distance
	d1 += d2;
	cout << "\n Result of operator (+=) d1: "; d1.show_dist();
	cout << endl;
}