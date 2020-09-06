// Program name.cpp or task;
// options;

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;


////////////////////////////////

int main()
{
	int n;
	double a;
	char ch;
	const char * fname = "C:\\Users\\dguln_000\\Documents\\C++_Programs\\Part 10. Files and Stream\\file1.txt";
	fstream myFile; // создаем файловую переменную для создания записей в файле
	myFile.open(fname,ios::out);
	// открывыем файл в режиме записи
	
	cout << "Enter number of counts: "; cin >> n; // количество элементов в файле
	for (int i = 0; i < n; i++)
	{
		cout << "Enter count a: ";
		// ввод числа
		cin >> a; // вводим с консоли
		myFile << a << "\t" << endl; // сразу же записываем в файл
	}
	//закрытие потока
	myFile.close();
	cout << "Do you want to clear file y/n ?" << endl; cin >> ch;
	if (ch == 'y')
	{
		myFile.clear();
	}

	// system("pause");
	return 0;
}