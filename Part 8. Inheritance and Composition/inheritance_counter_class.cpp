// inheritance_counter_class.cpp
// inheritance with Counter class

#include <iostream>
 using namespace std; 

//////////////////////////////////////////////////////////
class Counter // базовый класс
{
protected:
	unsigned int count;         // счетчик
public:
	Counter() : count(0)       // конструктор без аргументов
	{ }
	Counter(int c) : count(c)   // конструктор с одним параметром
	{ }
	unsigned int get_count() const // возвращает значение счетчика
	{
		return count;
	}
	Counter operator++()           // увеличивает значение
	{
		return Counter(++count);
	} // счетчика (префикс)
};
//////////////////////////////////////////////////////////
class CountDn : public Counter // производный класс
{
public:
	Counter operator--() // уменьшает значение счетчика
	{
		return Counter(--count);
	}
};
//////////////////////////////////////////////////////////
int main() 
{
 CountDn c1;        // объект c1
 cout << "\n c1 =" << c1.get_count(); // вывод на печать
 ++c1; ++c1; ++c1; // увеличиваем c1 три раза
 cout << "\n c1 =" << c1.get_count(); // вывод на печать
 --c1; --c1; // уменьшаем c1 два раза
 cout << "\n c1 =" << c1.get_count(); // вывод на печать
 cout << endl;
 return 0;
}