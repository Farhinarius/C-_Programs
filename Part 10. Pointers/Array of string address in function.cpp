// ptrtostr.cpp
// массив указателей на строки

#include <iostream>
using namespace std;
const int DAYS = 7;
void output_masstring(const char * arr[]);

int main()
{
	// массив указателей на строки
	const char* arrptrs[DAYS] = { "Monday", "Thuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" }; // инициализируем массив строк
	for (int j = 0; j < DAYS; j++) // покажем все строки
		cout << arrptrs[j] << endl;
	cout << endl;

	output_masstring(arrptrs); // передаем по адресу массив "массива символов" (вчитайся, он же массив строк) 
	// массив строчный -> массив столбцовый, в котором 7 строк
	return 0;
}

void output_masstring(const char * arr[]) // передаем по адресу массив строк
{
	for (int j = 0; j < DAYS; j++) // покажем все строки
		cout << *(arr++) << endl;
}