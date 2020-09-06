// englptr.cpp 
// ������ � ������ ������ ����� ��������� 

#include <iostream> 
using namespace std; 

/////////////////////////////////////////////////////////// 

class Distance {

private:
	int feet;
	float inches; 
		public :
	void getdist() // ��������� ����������
	{
		cout << "\nEnter feet: "; cin >> feet;
		cout << "Enter inches: "; cin >> inches;
	}
	void showdist() // ����� ����������
	{
		cout << feet << "\'-" << inches << '\"';
	}
};
///////////////////////////////////////////////////////////
int main()
{
	// without pointer
	Distance dist; // ���������� ������ ���� Distance
	dist.getdist(); // �������� ����������
	dist.showdist(); // ������� �� �����

	// with pointer
	Distance* distptr; // ���������� ����������-��������� �� Distance
	distptr = new Distance; // ������� ������ Distance
	distptr->getdist(); // �������� ��� ���� ����������
	distptr->showdist(); // ������� ����������
	cout << endl;
	return 0;
}