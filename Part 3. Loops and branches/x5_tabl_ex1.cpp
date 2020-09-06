// 
// 

#include <iostream>
using namespace std;

///////////////////////////

void main()
{
	unsigned int n = 5;
	for (int i = 1; i <= 100; i++)
	{
		cout << n * i << " ";
		if (n * i % 100 == 0) cout << endl;
	}

	cout << "\n\n---------------------------------";
	short int var1 = 9;
	if (var1 % 2)
		cout << "\n" << var1 % 2;

	return 0;
}