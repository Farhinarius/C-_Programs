// Do_while.cpp
// программа выводит четные числа в последовательности через оператор %

#include <iostream>
using namespace std;

int main()
{
	int divid;
	int divor;
	char ch;
	do
	{
		cout << " input divid: "; 
		cin >> divid;
		cout << " Input divor: "; 
		cin >> divor;
		cout << " D/d =  " << (divid / divor) << endl;
		cout << " D mod d = " << (divid % divor) << endl;
		cout << " Do you want to repeat operation d|d ... \n ";
		cin >> ch;	
	}
	while (ch != 'n');
	return 0;
}