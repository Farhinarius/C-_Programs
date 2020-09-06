// Program name.cpp or task;
// options;

#include <iostream>
using namespace std;

class Paral 
{
private:
	int a, b, c;
public:
	//----------Console Init----------//
	void console_init(int x, int y, int z)
	{
		cout << "\n Enter values of a,b,c: " << endl; cin >> x; cin >> y; cin >> z;
		a = x; b = y; c = z;
	}

	//----------Sqaure info----------//
	int square(int a, int b, int c);
	void get_square()
	{
		cout << "\n Square: " << 2 * (a * b + b * c + a * c) << endl;
	};
	
	//----------V info----------//
	int V(int a, int b, int c);
	void get_V()
	{
		cout << "\n V: " << a * b * c << endl;
	};
};


int Paral::square(int a, int b, int c)
{
	return 2 * (a*b + b * c + a * c);
}

int Paral::V(int a, int b, int c)
{
	return a * b * c;
};

void main()
{
	int i = 0; int j = 0; int k = 0;
	Paral Paralelogram;
	Paralelogram.console_init(i,j,k);
	cout << "\n//------------------------------------------------------------//" << endl;
	Paralelogram.get_square();
	Paralelogram.get_V();
}