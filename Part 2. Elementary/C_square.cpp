// circsquare.cpp
// type float;

#include <iostream>
using namespace std;
int main()
{
	 float r;
	 const float Pi = 3.14F;
	 cout << "Input radius of circle: ";
	 cin >> r;
	 float c_square = Pi*r*r;
	 cout << "Square of the circle = " << c_square << endl;

	 return 0;
}
