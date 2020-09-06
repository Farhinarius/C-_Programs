// linklist.cpp
// options;

#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////
struct link // один элемент списка
{
	int data;   // некоторые данные
	link* next; // указатель на следующую структуру
};
///////////////////////////////////////////////////////////
class linklist // список
{
private:
	link* first;
public:
	linklist()            // конструктор без параметров
	{
		first = NULL;
	}                    // первого элемента пока нет
	void additem(int d); // добавление элемента
	void display();      // показ данных
};
///////////////////////////////////////////////////////////
void linklist::additem(int d) // добавление элемента
{
	link * newlink = new link; // выделяем память
	newlink->data = d; // запоминаем данные
	newlink->next = first; // запоминаем значение first
	first = newlink; // first теперь указывает на новый элемент
}
///////////////////////////////////////////////////////////
void linklist::display()
{
	link * current = first; // начинаем с первого элемента
	while (current)        // пока есть данные
	{
		cout << current->data << endl; // печатаем данные
		current = current->next; // двигаемся к следующему элементу
	}
}
///////////////////////////////////////////////////////////
int main()
{
	linklist list_of_link; // создаем переменную-список
	list_of_link.additem(25); // добавляем туда несколько чисел
	list_of_link.additem(36);
	list_of_link.additem(49);
	list_of_link.additem(64);
	list_of_link.display(); // показываем список
	return 0;
}