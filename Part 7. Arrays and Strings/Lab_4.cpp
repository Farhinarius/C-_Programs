// rk_lab4.cpp
//

#include <iostream>
using namespace std;

int main()
{
	int buffer_mas[3][4] = {};
	int mas[3][4] = {};
	int count = 0;
	int min = 10000;
	int line = -1;
	int buffer_p = 0;
	int p = -1;
	int m = 0;
   
	///////////////////////////////////////////////////

		cout << " Input matrix: \n";         //Initialization;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> buffer_mas[i][j];
		}

	}

	cout << "\n Matrix:\n";            // Matrix;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << buffer_mas[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < 3; i++)             // number of >0 elements
	{
		count = 0;
		for (int j = 0; j < 4; j++)
		{
			if (buffer_mas[i][j] > 0)
			{
				count++;
			}
		}

		if (count < min)
		{
			min = count;
			line++;
		}

	}

	for (int i = line; i <= line; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			buffer_mas[i][j] = 0;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		buffer_p = 0;
		for (int j = 0; j < 4; j++)
		{
			if (buffer_mas[i][j] != 0)
			{
				buffer_p++;
			}
		}
		if (buffer_p > 0)
		{
			p++;
			for (int j = 0; j < 4; j++)
			{
				mas[p][j] = buffer_mas[i][j];
			}
		}
	}

	m = p;
	p = -1;
	cout << "\n Matrix what we looking for:\n";
	for (int i = 0; i <= m; i++)
	{
		p++;
		for (int j = 0; j < 4; j++)
		{
			cout << mas[p][j] << " ";
		}
		cout << endl;
	}

	cout << "\n Adress of delete string:\n";
	for (int i = line; i <= line; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "Adress of deleted element " << j << " = " << &buffer_mas[i][j] << '\n';
		}
	}
	return 0;
}


