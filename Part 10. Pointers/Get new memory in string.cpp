// newintro.cpp // познакомимся с оператором new 
#include <iostream> 
#include <cstring> 
using namespace std;

int main() {
	const char* str = "Power"; // 5 symbols
	int len = strlen(str); // вычислим длину нашей строки
	char* ptr; // определим переменную pointer
	ptr = new char[len + 1]; // выделим память равную количеству элементов массива символов char * str;
	strcpy(ptr, str); // скопируем строку str в ptr
	cout << "ptr = " << ptr << endl; // покажем что содержится в ptr
	delete[] ptr; // освободим выделенную память
	return 0;
}