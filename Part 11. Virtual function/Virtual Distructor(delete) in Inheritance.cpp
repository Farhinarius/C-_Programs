// vertdest.cpp
// Тест невиртуальных и виртуальных деструкторов

#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////
class Base
{
public:
	// ~Base() // невиртуальный деструктор
	 virtual ~Base() // виртуальный деструктор - так правильно, удалится память выделенная и на первый и на второй объект
	{
		cout << "Base deleted\n";
	}
};
///////////////////////////////////////////////////////////
class Derv : public Base
{
public:
	~Derv()
	{
		cout << "Derv deleted\n";
	}
};
///////////////////////////////////////////////////////////
int main()
{
	Base* pBase = new Derv;
	delete pBase;
	return 0;
}