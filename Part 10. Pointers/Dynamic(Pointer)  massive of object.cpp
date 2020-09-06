// ptrobjs.cpp
// ������ ���������� �� �������


#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////
class person // ����� �������
{
private:
	char name[40]; // ��� ��������
public:
	void setName() // ��������� �����
	{
		cout << " Enter name: ";
		cin >> name;
	}
	void printName() // ����� �����
	{
		cout << "\n Name: " << name;
	}
};
///////////////////////////////////////////////////////////
int main()
{
	person* Person_pointer[100]; // ������ ����������
	int n = 0; // ���������� ��������� � �������
	char choice;
	do
	{
        Person_pointer[n] = new person; // ������� ����� ������
		Person_pointer[n]->setName(); // ������ ��� 
		n++; // ����������� ����������
		cout << "Continue (y/n) ?"; // ����������, �������� �� ����
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