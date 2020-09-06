// adifelse.cpp
// приключенческая игра с применением ветвления if...else
#include "pch.h"
#include <iostream>
using namespace std;
#include <conio.h> // для _getche()
int main()
{
	char dir = 'a';
	int x = 0, y = 0;
	cout << "Turn Enter for close application...\n";
	while (dir != '\r') // пока не будет нажата клавиша Enter
	{
		cout << "\nInput you coordinates: " << x << ", " << y;
		cout << "\nSelect direction (a,s,d,w): ";
		cout << endl;
		dir = _getche(); // ввод символа
		if (dir == 'w') // движение на север
			y++;
		else if (dir == 's') // движение на юг
				y--;
			else if (dir == 'd') // движение на восток
					x++;
				else if (dir == 'a') // движение на запад
						x--;
	} // конец цикла while
	return 0;
}