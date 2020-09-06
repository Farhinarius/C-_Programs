// Program name.cpp or task;
// options;

#include <iostream>
using namespace std;

//////////////////////////////////////////////////////
class Distance
{
private:
	int feet;
	float inches;
public:
	Distance() :feet(0), inches(0)
	{};
	Distance(int fn, int in) : feet(fn), inches(in)
	{};
	void getdist()
	{
		cout << "\n Enter value of feet: "; cin >> feet;
		cout << "\n Enter value of inches: "; cin >> inches;
	}
	void showdist() 
	{
		cout << feet << "\'-" << inches << '\"';
	}
	void add_dist(Distance, Distance);
};
////////////////////////////////////////////////////////////////////
void Distance::add_dist(Distance dd1, Distance dd2)
{
	inches = dd1.inches + dd2.inches; // сложение дюймов
	feet = 0; // с возможным заемом
	if (inches >= 12.0) // если число дюймов больше 12.0,
	{ // то уменьшаем число дюймов
		inches -= 12.0; // на 12.0 и увеличиваем
		feet++; // число футов на 1
	}
	feet += dd1.feet + dd2.feet; // сложение футов
}
//////////////////////////////////////////////////////////////////////
void main()
{
	Distance dist1, dist3; // две длины
	Distance dist2(11, 6.25); // определение и инициализация
	dist1.getdist(); // ввод dist1
	dist3.add_dist(dist1, dist2); // dist3 = dist1 + dist2
	// вывод всех длин
	cout << "\ndist1 = "; dist1.showdist();
	cout << "\ndist2 = "; dist2.showdist();
	cout << "\ndist3 = "; dist3.showdist();
	cout << endl;
}