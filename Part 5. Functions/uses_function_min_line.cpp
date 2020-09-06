// ConsoleApplication43.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
void min_line(char,int);

int main()
{
    min_line('-', 56);
	cout << "\nchar - 128...127" << endl
		<< "double - 336 336...336 336 " <<endl;
	min_line('=', 36);
	cout << "\n I have a mighty ring of power" << endl;
	min_line('-', 56);
		 
}
void min_line(char ch, int n)
{
	for (int i = 0; i <= n; i++)
		cout << ch;
}