// Safearray_overload_mas.cpp
// options;

#include <iostream>
#include <string>
#include <process.h>
using namespace std;
const int LIMIT = 100;

///////////////////////////////////////////////
class safearray
{
private:
	int arr[LIMIT];
public:
	// установка значения элемента массива
	void putel(int n, int value)
	{
		if (n < 0 || n >= LIMIT)
		{
			cout << "\nError text!"; exit(1);
		}
		arr[n] = value;
	}
	// получение значения элемента массива
	int getel(int n) const
	{
			if (n < 0 || n >= LIMIT)
			{
				cout << "\nError text!"; exit(1);
			}
		return arr[n];
	}
};
///////////////////////////////////////////////
int main()
{
	safearray mas;
	
	// задаем значения элементов
	for (int j = 0; j < 10; j++)
		mas.putel(j, j * 10+10);

	// показываем элементы
	for (int j = 0; j < 10; j++)
	{
		int temp = mas.getel(j);
		cout << " Element [" << j+1 << "] = " << temp << endl;
	}
	return 0;
}