// friend.cpp
// ƒружественные функции
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class beta; // нужно дл€ объ€влени€ frifunc
class alpha
{
private:
	int data;
public:
	alpha() : data(3) { } // конструктор без
	// аргументов
	friend int frifunc(alpha, beta); // прототип (1) дружественной функции, служащий св€зывающим звеном 
};
///////////////////////////////////////////////////////////
class beta
{
private:
	int data;
public:
	beta() : data(7) { } // конструктор без
	// аргументов
	friend int frifunc(alpha, beta);  // прототип (2) дружественной функции, служащий св€зывающим звеном 
};
///////////////////////////////////////////////////////////

int frifunc(alpha a, beta b) // определение функции 
{
	return (a.data + b.data);
}
//---------------------------------------------------------
int main()
{
	alpha aa;
	beta bb;
	cout << frifunc(aa, bb) << endl; // вызов функции
	return 0;
}