// Nested_Structure.cpp
//

#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////
struct Distance
{
	int feet; 
	float inches; 
};
//////////////////////////////////////////////////////////
struct Room 
{
	Distance length; 
	Distance width; 
};
//////////////////////////////////////////////////////////

int main()
{
	Room dining;

	cout << "\nInput length(feet and inches) of room :" << endl; 
	cin >> dining.length.feet; 
	cin >> dining.length.inches;


	cout << "-------------------------------------------------";
	cout << "\nInput width(feet and inches) of room : " << endl;
	cin >> dining.width.feet; 
	cin >> dining.width.inches;

	float l = dining.length.feet + dining.length.inches / 12; // делаем значение вещественного типа одной переменной
	float w = dining.width.feet + dining.width.inches / 12;   // делаем значение вещественного типа одной переменной
	cout << " Square of the room = " << l * w << " ^2 footes \n";
	return 0;
}

