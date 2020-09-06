// ex5_2.cpp
// too shablon 

#include <iostream> 
using namespace std;

int main()
{
	int j = 0;
	cout << "*" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "*";
		while (j <= i)
		{
			cout << "*" << "*";
			j++;
		}
		cout << endl;
		j = 0;
	}
	return 0;
}