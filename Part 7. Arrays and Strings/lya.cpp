// ConsoleApplication24.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

////////////////////////////////////////////

int main()
{
	int mas[4][4] = {};
	int i,j;
	int max = 0;
	int jmax = 0;
	int buffer;
	int max_remem;

//////////////////////////////////

	cout << "\n Input matrix:  \n";
	for (i = 0; i <= 3; i++)               // Matrix init;
		for (j = 0; j <= 3; j++) {
			cin >> mas[i][j];
		}

	cout << "\n  Matrix output:  \n";
	for (i = 0; i <= 3; i++) {              // Matrix output;
		for (j = 0; j <= 3; j++) {
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}

	cout << " Adress of max elements: ";
	max = mas[0][0]; 
	
	for (i = 0; i <= 3; i++) {              // Condition;
		for (j = 0; j <= 3; j++) {
			if (mas[i][j] > max) {
				max = mas[i][j]; jmax = j; cout << " String of" << i << "max element =  " << i << j << endl;
			}
			}
			for (j = 0; j <= 3; j++) {      // trade
				if (j = jmax) {
					buffer = mas[i][4];
					mas[i][4] = max;
					mas[i][jmax] = buffer;                   // remem element;
				}
			}
			max = 0;
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

