//
// Lab_6.cpp

#include <iostream> 
#include <string> 
#include <sstream> 

using namespace std;

struct node 
{
	string e;
	node *previous = NULL;
	node *next = NULL;
};

int main()
{
	string in;
	cout << "Enter string : ";
	getline(cin, in); //����� ��� ������ �� ������� 
	stringstream line(in); //������ �� �� ����� 
	string word;

	node *first = new node;
	node *cur = first;

	while (line >> word) { //� ������ ������ ����� ����� �� ������ 
		cur->e = word;
		cur->next = new node;
		cur->next->previous = cur;
		cur = cur->next;
	}
	cur = cur->previous;
	delete cur->next;
	cur->next = NULL;

	cout << "First spisok: " << endl;
	while (first != NULL) { //����� ������ � ������� ������ 
		cur = first;
		cout << first->e << endl;
		first = first->next;
		delete cur;
	}

}