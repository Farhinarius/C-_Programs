//  ^3 for.cpp
//

#include <iostream>
#include <iomanip>
using namespace std;
///////////////////////////////////////////////////
class Person // класс человек
{
private:
	char name[40]; // имя человека
public:
	void setName() // установка имени
	{
		cout << "Input name: ";
		cin >> name;
	}
	void printName() // показ имени
	{
		cout << "\n Name: " << name;
	}
};
///////////////////////////////////////////////////
int main()
{
	Person * persPtr[100];
	int n = 0;
	char choice;

	do
	{
		persPtr[n] = new Person;
		persPtr[n]->setName();
		n++;
		cout << "Do you want to continue input ?(y/n)";
		cin >> choice;
	} while (choice == 'y');
	
	for (int  i = 0; i < n; i++)
	{
		cout << "\nInfo about number: " << i + 1;
		persPtr[i]->printName();
	}
	cout << endl;
	return 0;
}
