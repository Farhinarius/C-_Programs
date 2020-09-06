// C++_Workspace.cpp
//
#include <iostream>
#include <ctime>
using namespace std;

struct node
{
	int num;
	node* next;
};

void fulloutput(node*);
void outlist(node*, int, int);
int myrand();

int main()
{
	size_t start_time = clock();

	srand(time(0));
	node* linkedlist = new node;
	node* first = linkedlist;
	int lb, rb;

	linkedlist->num = myrand();
	linkedlist->next = NULL;

	for (int i = 0; i < 10; i++)
	{
		linkedlist->next = new node;
		linkedlist = linkedlist->next;
		linkedlist->num = myrand();
	}

	linkedlist->next = NULL;

	cout << "Input range: " << endl; cin >> lb >> rb;
	// fulloutput(first); cout << endl;
	outlist(first, lb, rb);

	size_t end_time = clock();
	cout << "\nImplementation time: " << (end_time - start_time) / 1000 << endl;
}

void fulloutput(node* first)
{
	node* list = first;
	while (list->next != NULL)
	{
		cout << list->num << " ";
		list = list->next;
	}
}

void outlist(node* first, int a, int b)
{
	node* list = first;
	while (list->next != NULL)
	{
		if (list->num >= a and list->num <= b)
		{
			cout << list->num << " ";
		}
		list = list->next;
	}
}

int myrand()
{
	return -10 + rand() % 20;
}