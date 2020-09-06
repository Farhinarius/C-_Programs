// arrover3.cpp
// демонстраци€ создани€ безопасного массива, провер€ющего
// свои индексы при использовании
// используетс€ перегрузка операции []
#include <iostream>
using namespace std;
#include <process.h> // дл€ функции exit
const int LIMIT = 100; // размер массива
///////////////////////////////////////////////////////////
class safearray
{
private:
	int arr[LIMIT];
public:
	// обратите внимание, что функци€ возвращает ссылку!
	int& operator[](int n)
{
	if (n < 0 || n >= LIMIT)
	{
		cout << "\nError index!"; exit(1);
	}
	return arr[n];
}
};
///////////////////////////////////////////////////////////
int main()
{
	safearray sa1;
	// задаем значени€ элементов
	for (int j = 0; j < 10; j++)
		sa1[j] = j * 10; // используем функцию слева от знака =
		// показываем элементы
	for (int j = 0; j < 10; j++)
	{
		int temp = sa1[j]; // используем функцию справа от знака =
		cout << " Element[" << j+1 << "] = " << temp << endl;
	}
	return 0;
}