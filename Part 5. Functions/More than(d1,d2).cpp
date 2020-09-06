/*Напишите функцию, принимающую в качестве аргументов два значения
типа Distance и возвращающую значение наибольшего из аргументов (необходимую информацию можно найти в примере RETSTRC).*/
// more_than.cpp

#include <iostream>
using namespace std;

struct Distance
{
	int feet;
	int inches;
};

Distance more_than(Distance, Distance);

int main()
{
	Distance d1, d2;
	cout << "\nEnter the value of d1: "; cout << endl; cin >> d1.feet; cin >> d1.inches; cout << endl; // input d1 counts
	cout << "\nEnter the value of d2: "; cout << endl; cin >> d2.feet; cin >> d2.inches; cout << endl; // input d2 counts		
	cout << "We find this one: " << more_than(d1,d2).feet << " and " << more_than(d1, d2).inches << endl; // find what more with our function
	return 0;
}

Distance more_than(Distance dd1, Distance dd2)
{
	int inches_dd1, inches_dd2;
	inches_dd1 = dd1.feet * 12 + dd1.inches; // converting  d1 number into inches
	inches_dd2 = dd2.feet * 12 + dd2.inches; // converting  d2 number into inches
	if (inches_dd1 > inches_dd2) 
		return dd1; // comparing d1 and d2 (inches comparing) and returning what more in main function
	else 
		return dd2;
}