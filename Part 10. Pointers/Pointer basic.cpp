// ConsoleApplication41.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	int val = 10;
	int* ptr;
	ptr = &val;
	cout << "\n Output adress of val: " << endl;
	cout << " \n " << ptr;

	cout << "\n Output adress of val: " << endl;
	cout << " \n " << &val;
	
	
}
