// Function_pointer.cpp
// options;

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

void check(char *a, char *b, int(*cmp)(const char *, const char *));

////////////////////////////////

int main(void)
{
    char s1[80], s2[80]; // массивы символов
	int(*p)(const char *, const char *); // указатель на функцию с двумя параметрами типа * const char

	p = strcmp; // strcmp - библиотечная строковая функция сравнения строк
	// присваивает адрес функции strcmp указателю p 

	cout << "Input two strings: " << endl;
	cin >> s1;
	cin >> s2;
	check(s1, s2, p); /* Передает адрес функции strcmp
						 посредством указателя p */
	return 0;
}

void check(char *a, char *b, int(*cmp)(const char *, const char *))
{
	cout << " Check coincidence: ";
	if (!(*cmp)(a, b))  cout << " Equal ";
	else cout << " Not Equal";
}