// ex4_2.cpp
// Calculator_book;

#include <iostream>
using namespace std;

/*------------------------------------------------------------------------------------*/


int main()
{
	double n1, n2, ans;
	char oper, ch;
	do 
	{
		cout << "\n Input 1-st operand, operation, 2-nd operand :";
		cin >> n1 >> oper >> n2;          // useful operation 
		switch (oper)
		{
			case '+':ans = n1 + n2; break;
			case '-':ans = n1 - n2; break;
			case '*':ans = n1 * n2; break;
			case '/':ans = n1 / n2; break;
			default: ans = 0;
		}
		cout << "Result = " << ans;
		cout << "\n Continue (input 'y' or 'n')?";
		cin >> ch;
	} while (ch != 'n');
	return 0;
}