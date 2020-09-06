// ptrobjs.cpp
// массив указателей на объекты


#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////
class person // класс человек
{
private:
	char name[40]; // имя человека
public:
	void setName() // установка имени
	{
		cout << " Enter name: ";
		cin >> name;
	}
	void printName() // показ имени
	{
		cout << "\n Name: " << name;
	}
};
///////////////////////////////////////////////////////////
int main()
{
	person* Person_pointer[100]; // массив указателей
	int n = 0; // количество элементов в массиве
	char choice;
	do
	{
        Person_pointer[n] = new person; // создаем новый объект
		Person_pointer[n]->setName(); // вводим имя 
		n++; // увеличиваем количество
		cout << "Continue (y/n) ?"; // спрашиваем, закончен ли ввод
		cin >> choice;
	} while (choice != 'n');
	for (int j = 0; j < n; j++)
	{
		cout << "\n Name of " << j + 1 << " person ";
		Person_pointer[j]->printName();
	}

	delete[] Person_pointer;
	cout << endl;
	return 0;
}