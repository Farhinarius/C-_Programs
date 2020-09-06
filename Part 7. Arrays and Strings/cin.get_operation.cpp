
// ConsoleApplication34.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;

///////////////////////////////////////

const int string_size = 300;
int main()
{     
	char str[string_size];
	cout << "Welcome, ";
	cout << "enter the string: " << endl;
	cin.get(str, string_size, '\n');
	return 0;
}
