// ConsoleApplication24.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

////////////////////////////////////////////

int main()
{
	int mas[4][4] = {};
	int i, j, k;
	int max = -1;
	int jmax = -1;
	int buffer;
	int max_remem;
////////////////////////////////////////////


	cout << "\n Input matrix:  \n";
	for (i = 0; i <= 3; i++)               // Matrix init;
		for (j = 0; j <= 3; j++)
		{
			cin >> mas[i][j];
		}

	cout << "\n  Matrix output:  \n";        // Matrix output;
	for (i = 0; i <= 3; i++) 
	{             
		for (j = 0; j <= 3; j++)
		{
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}

	for (i = 0; i <= 3; i++) {              // Condition;
		for (j = 0; j <= 3; j++)
		{
			if (mas[i][j] > max) 
			{
				max = mas[i][j];   
				jmax = j;          
			}
		}
		buffer = mas[i][3];
		mas[i][3] = max;
		mas[i][jmax] = buffer;
		max = 0;
		jmax = 0;
	}

	cout << "\n  Matrix what we looking for:  \n";
	for (i = 0; i <= 3; i++) {                           // Matrix Result finding;
		for (j = 0; j <= 3; j++) {
			cout << mas[i][j] << "  ";
		}
		cout << endl;
	}
	return 0;
}

