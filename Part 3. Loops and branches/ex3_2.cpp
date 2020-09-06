// ex3_2.cpp
// too shablon 

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char ch;
	unsigned long num = 0;
	cout << "\n Input n: ";
	while ((ch = _getche()) != '\r') {
		num = (num * 10) + ch - '0';
		/* cout << '\n' << num; */
	}
	cout << "\n You input num =  " << num;
	return 0;
}