// ex5_2.cpp
// too shablon 
 
#include <iostream> 
using namespace std;

int main()
{
	cout << 'x' ;
	for (int i = 1; i <= 10; i++) 
	{
		cout << '\n' << 'x';
		for (int j = 1; j <= i; j++)
			cout << 'x' << 'x';
	}
	
	int j = 0;
	cout << '\n' << "*";
	for (int i = 0; i < 10; i++)
	{
		cout <<'\n' << "*";
		while (j <= i)
		{
			cout << "*" << "*";
			j++;
		}
		j = 0;
	}

	return 0;
}