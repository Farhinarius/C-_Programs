// Lab_8.cpp
// options;

#include <iostream>
#include <string>
using namespace std;
#define M_PI            3.14159265358979323846

///////////////////////////////////////////////

class Circle
{
protected:
	int x, y;              // centre coordinates
	int R;                 // radius
public:
	Circle() :x(0), y(0), R(0)      // init (0) constructor
	{}
	
	Circle(int a, int b, int r) : x(a), y(b), R(r)  // parametras constructor
	{}

	void get_coordinates()                  // Input coordinates and Radius
	{
		cout << "\n Enter x and y: " << endl; cin >> x; cin >> y;
		cout << " Enter radius: "; cin >> R;
		cout << "/-----------------------------------/";
	}
	void show_object_info()                // Show all object information
	{
		cout << "\n All information about object circle: ";
		cout << "\n Coordinates x,y: " << x << "," << y << "\n Radius: " << R << endl;
		cout << "/-----------------------------------/";
	}
	float square()
	{
		return (pow(R, 2)*M_PI);
	}
};

/////////////////////////////////////////

class Sphere : public Circle     // inheritance
{
protected:
	int z;         // new coordinate z;
public:
	Sphere():z(0)   // z(0) init constructor
	{}
	// Sphere(): Circle()
	// {}
	void get_z()              // console input new coordinate
	{
		cout << "\n Enter z coordinate: "; cin >> z;
	}
	void show_all_object_info()      // show all information
	{
		cout << "\n All information about object sphere: ";
		cout << "\n Coordinates x,y,z: " << x << "," << y << "," << z << "\n Radius: " << R << endl;
		cout << "/-----------------------------------/";

	}
	float Volume()                      // Volume of sphere
	{
		return (4 / 3 * M_PI*pow(R, 3));
	}
};

//////////////////////////////////////////////////////////////////////////

int main()
{
	Sphere object;  // init (0);
	
	////////////////////////////////////// Circle
	
	cout << "\n ---------------> Circle Workspace <--------------- " << endl;
	object.get_coordinates();     
	object.show_object_info();
	cout << "\n Square of Circle: " << object.square() << endl;
	cout << "/-----------------------------------/" << endl;
	
	////////////////////////////////////// Volume
	
	cout << "\n ---------------> Sphere Workspace <--------------- " << endl;
	object.get_z();
	cout << "/-----------------------------------/" << endl;
	object.show_all_object_info();
	cout << "\n Volume of Sphere: " << object.Volume() << endl;
	cout << "/-----------------------------------/" << endl;

	//////////////////////////////////////
	return 0;
}