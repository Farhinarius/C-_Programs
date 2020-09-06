// Algebra_summ;
// options;

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

//////////////////////////////////////////////////

int main()
{
	/// - variables creation ///
	int num;          // number of elements in equation
	int y = 0;
	int x = 0;              // init var x for input
	float z, b, a, beta;    // parts of equation
	int counter = 0;             
	
   /////////////////////////////////////////
	
	cout << "Input number of x: "; cin >> num;
	do
	{
		counter += 1;
		/// init all variables ///
		cout << "\nEnter Z,B,A value for x" << counter << ": " << endl; 
		cout << "z = "; cin >> z;    // init Z
		cout << "b = "; cin >> b;    // init B
		cout << "a = "; cin >> a;    // init A
		cout << "beta = "; cin >> beta; // init beta

		/// calculate equation VARIABLES ->  X = Z^3 - B + A^2 / tg^2? ///
		z = pow(z, 3); // calculating z^3
		a = pow(a, 2); // calculating a^2
		a = a / tan(beta); // calculating a^2/ tg^2

		x = z - b + a;
		num -= 1;       // -1 elemnt in dataline
		y += x;    // finding y with all part of x equation
	} while (num != 0);

	cout << endl;
	cout << "Y = " << y << endl;
	return 0;
}