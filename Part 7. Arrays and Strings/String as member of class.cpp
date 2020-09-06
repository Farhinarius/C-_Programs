// strpart.cpp
// использование строк в классе 
#include <iostream> 
#include <cstring> 
using namespace std;
//--------------------------------------------------------//
class Part {
private:
	char partname[30]; // название
	int partnumber; // номер
	double cost; // цена
public:
	//----Constructors----//
	Part() : partname(), partnumber(), cost() {}

	Part(const char _partname[], int _partnumber, double _cost)
	{
		strcpy_s(partname, _partname);
		partnumber = _partnumber;
		cost = _cost;
	}

	Part(char * _partname, int _partnumber, double _cost)
	{
		strcpy_s(partname, _partname);
		partnumber = _partnumber;
		cost = _cost;
	}

	//---------------------------------------------------------------//
	void setpart(const char * _partname, int _partnumber, double _cost)
	{
		strcpy_s(partname, _partname);
		partnumber = _partnumber;
		cost = _cost;
	}

	void setpart(char * _partname, int _partnumber, double _cost)
	{
		strcpy_s(partname, _partname);
		partnumber = _partnumber;
		cost = _cost;
	}

	void showpart()
	{
		cout << "\nName: " << partname;
		cout << "\nNumber: " << partnumber;
		cout << "\nPrice: " << cost << "$" << endl;
	} 
};
//--------------------------------------------------------//
int main()
{
	Part part1, part2;
	part1.setpart("wrench1", 4473, 217.55);
	part2.setpart("wrench2", 9924, 419.25);
	cout << "\nFirst detail => "; part1.showpart();
	cout << "\nSecond detail =>"; part2.showpart();
	cout << endl;
	return 0;
}