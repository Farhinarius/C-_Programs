// Автомат - Замок
#include <iostream>
using namespace std;

int main()
{
	char ans, keychar;
	const int states = 5, symbols = 5;

	int col = 0, state = 0, state_table[states][symbols] = {
		{1, 0, 0, 0, 0},
		{1, 0, 2, 0, 0},
		{1, 0, 0, 3, 0},
		{1, 0, 4, 0, 0},
		{1, 0, 0, 0, 0}
	}; 

	cout << "You need to enter 4-character code" << endl;
	do
	{
		while (state != 4)
		{
			cout << "Enter char: "; cin >> keychar;
			if (keychar == 'A') col = 0;
			if (keychar == 'B') col = 1;
			if (keychar == 'C') col = 2;
			if (keychar == 'D') col = 3;
			if (keychar != 'A' and keychar != 'B' and keychar != 'C' and keychar != 'D') col = 4;

			state = state_table[state][col];

			if (col == 4)
			{
				cout << "Wrong input, please input only ABCD char-ers... " << endl;
			}

			if (state == 4)
			{
				cout << "Keyword combination have founded!" << endl;
			}
			else
			{
				cout << "Key haven't founded..." << endl;
			}
		}
		state = 0;


		cout << "Do you want to continue? (y/n): "; cin >> ans;
	} while (ans == 'y');
	return 0;
}


