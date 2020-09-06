//Chcnt2.cpp
#include <iostream>
#include <conio.h> 
using namespace std;

int main()
{
	int ch_count = 0;
	int wd_count = 0; 
	char ch;
	while ((ch = _getche()) != '\r') 
	{
		if (ch == ' ') 
			wd_count++; 
		else 
			ch_count++; 
	} 
	cout << "\nSpaces: " << wd_count << endl;
	cout << "Symb: " << ch_count << endl;
	return 0;
}