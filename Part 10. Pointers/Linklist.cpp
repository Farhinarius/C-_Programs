// linklist.cpp
// options;

#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////
struct link // ���� ������� ������
{
	int data;   // ��������� ������
	link* next; // ��������� �� ��������� ���������
};
///////////////////////////////////////////////////////////
class linklist // ������
{
private:
	link* first;
public:
	linklist()            // ����������� ��� ����������
	{
		first = NULL;
	}                    // ������� �������� ���� ���
	void additem(int d); // ���������� ��������
	void display();      // ����� ������
};
///////////////////////////////////////////////////////////
void linklist::additem(int d) // ���������� ��������
{
	link * newlink = new link; // �������� ������
	newlink->data = d; // ���������� ������
	newlink->next = first; // ���������� �������� first
	first = newlink; // first ������ ��������� �� ����� �������
}
///////////////////////////////////////////////////////////
void linklist::display()
{
	link * current = first; // �������� � ������� ��������
	while (current)        // ���� ���� ������
	{
		cout << current->data << endl; // �������� ������
		current = current->next; // ��������� � ���������� ��������
	}
}
///////////////////////////////////////////////////////////
int main()
{
	linklist list_of_link; // ������� ����������-������
	list_of_link.additem(25); // ��������� ���� ��������� �����
	list_of_link.additem(36);
	list_of_link.additem(49);
	list_of_link.additem(64);
	list_of_link.display(); // ���������� ������
	return 0;
}