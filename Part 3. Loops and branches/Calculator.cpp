// Calc.cpp
// too shablon 

#include <iostream>
using namespace std;

/* ------------------------------------------------------------------------------------------ */

int main()
{
	float x, y; 
	char n;
	int j,k;
	cout << " input number of operations: "; cin >> k;
	for (j = 0; j < k; j++) {
		cout << "\n Input your 1-st operand: "; cin >> x;
		cout << "\n Input your 2-st operand: "; cin >> y;
		cout << "\n Choose operation(+,-,*,/): "; cin >> n;
		switch (n) 
		{
			case '+': cout << "\n Result: " << x + y << endl;  break;
			case '-': cout << "\n Result: " << x - y << endl;  break;
			case '*': cout << "\n Result: " << x * y << endl;  break;
			case '/': cout << "\n Result: " << x / y << endl;  break;
			default: cout << "\n Error \n";
		}
	}
	return 0;
}