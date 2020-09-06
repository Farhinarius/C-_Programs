/* 1. Предположим, вы хотите создать таблицу умножения на заданное число.
Напишите программу, которая позволяет пользователю ввести это число,
а затем генерирует таблицу размером 20 строк на 10 столбцов.Первые
строки результата работы программы должны выглядеть примерно следующим образом :
*/ 
// Recuirse_alg.cpp

#include <iostream>
using namespace std;

///////////////////////////
inline unsigned int tab(int n, int i) 
{
	return n * i;	
}

void main()
{
	unsigned int num;
	cout << "\Enter the num: "; cin >> num;
	cout << endl;
	for (int j = 1; j <= 100; j++)
	{
		cout << tab(num, j) << " ";
		if (j % 10 == 0) cout << endl;
	}
}