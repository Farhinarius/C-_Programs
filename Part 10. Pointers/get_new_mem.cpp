// get_new_mem.cpp
// познакомимся с оператором new
#include <iostream>
#include <string>
using namespace std;
void main()
{
	const char* str = "Niggaaaaaaaaaaaaaa";
	int len = strlen(str); // вычислим длину нашей строки
	char* ptr; // определим переменную
	ptr = new char[len + 1]; // выделим память
	strcpy(ptr, str); // скопируем строку str в ptr
	cout << "ptr = " << ptr << endl; // покажем что содержится в ptr
	delete[] ptr; // освободим выделенную память
}