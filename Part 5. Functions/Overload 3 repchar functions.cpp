// overload_3_repchar_functions.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void repchar(); // прототипы
void repchar(char);
void repchar(char, int);

int main() 
{
	repchar(); 
	repchar('='); 
	repchar('+', 30); 
	return 0;
}

// выводит на экран 45 символов '*'
void repchar() 
{
	for (int j = 0; j < 45; j++)      // цикл, выполняющийся 45 раз cout << '*'; // вывод символа '*'
		cout << "\n";
}

//--- функция repchar()----------------------------- // выводит 45 заданных символов
void repchar(char ch)
{
	for (int j = 0; j < 45; j++) // цикл, выполняющийся 45 раз cout << ch; // вывод заданного символа
		cout << "\n";
}


//--------------------------------------------------------
// функция repchar()
// выводит заданный символ заданное число раз
void repchar(char ch, int n) 
{
	for (int j = 0; j < n; j++) // цикл, выполняющийся n раз cout << ch; // вывод заданного символа
		cout << "\n";
}

