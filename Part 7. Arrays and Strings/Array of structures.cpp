// partaray.cpp
// ������ �� ��������
#include <iostream>
using namespace std;
const int SIZE = 4;
///////////////////////////////////////////////////////////
struct part
{
	int modelnumber;       // ����� ����� �����
	int partnumber;        // ������� ����� �����
	float cost;
};
///////////////////////////////////////////////////////////
int main()
{
	int n;
	part apart[SIZE];
	for (n = 0; n < SIZE; n++)     // ������� ��� ������� �������
	{
		cout << "Enter the number of detail: ";
		cin >> apart[n].modelnumber;
		cout << "Enter the number of part: ";
		cin >> apart[n].partnumber;
		cout << "Enter prize: ";
		cin >> apart[n].cost;
		cout << endl;
	}
	cout << endl;
	for (n = 0; n < SIZE; n++)
	{
		cout << "Detail: " << apart[n].modelnumber; 
		cout << " Part: " << apart[n].partnumber;
		cout << " Prize: " << apart[n].cost << endl;
	}
	return 0;
}