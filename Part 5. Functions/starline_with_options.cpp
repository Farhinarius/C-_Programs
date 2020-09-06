// ConsoleApplication42.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
using namespace std;
void starline();		// объявление функции (прототип)


// определение функции starline()
void starline()
{
	for (int j = 0; j <= 45; j++) // тело функции
		cout << "*";
	cout << endl;

}



int main()
{   
	starline(); // вызов функции
	cout << "Type of data:" << endl;
	starline(); // вызов функции
	cout << "char:    -128...127" << endl <<
		"shot:    -32 768...32767" << endl <<
		"int       System-concerned type" << endl <<
		"long      -2 147 483 648...2 147 483 647" << endl;
    starline(); // вызов функции
	return 0;
}


