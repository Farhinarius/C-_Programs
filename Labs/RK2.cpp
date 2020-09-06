// ������� 2_3

#include <iostream> 
#include <string> 
using namespace std;
///////////////////////////
struct elem {
	string Str;
	elem *left, *right;
};
///////////////////////////
int main() 
{
	string WholeSt, Word = "";
	getline(cin, WholeSt);
	cout << WholeSt << endl;

	///////////////////////////

	elem *first, *last, *pass, *next; // ������, ���������, �������, ���������
	first = new struct elem; // �������������� ��� ������� ������ �������
	pass = first; // 
	last = first; //
	first->left = NULL;                // first ������ ��������� �� ������ �������
	first->right = NULL;
	int i = 0;
	bool check = true;

	//////////////////////////////////////////////////////////

	while ((i < WholeSt.length()) && (WholeSt[i] != ' ')) // ����������� ������� ����� 
	{  
		Word += WholeSt[i];
		i += 1;
	}
	pass->Str = Word;
	Word = "";

	////////////////////////////////////////////////

	for (i += 1; i < WholeSt.length(); i++)        // ���������� ���� � ������
	{
		if ((WholeSt[i] == ' '))          // ���� ������ ������     
		{
			next = new struct elem;
			pass->right = next;
			//////////////////////////
			next->right = NULL;
			next->Str = Word;
			next->left = pass;
			//////////////////////////
			pass = next;
			last = next;
			Word = "";
		}
		else 
		{
			Word += WholeSt[i];
		}
	}
	if (Word.length())            // ���� ����� ������
	{
		next = new struct elem;
		pass->right = next; // �� ��������� ��������
		///////////////////////////
		next->right = NULL;
		next->Str = Word;
		next->left = pass;
		///////////////////////////
		pass = next;
		last = next; 
	}
	//////////////////////////////////////////////

	while (check)
	{
		check = false;
		pass = first;
		next = first->right;
		while (next != NULL)
		{
			if (pass->Str > next->Str)
			{
				string temp;
				temp = pass->Str;
				pass->Str = next->Str;
				next->Str = temp;
				check = true;
			}
			pass = next;
			next = pass->right;
		}
	}

	////////////////////////////////////////
	cout << " Sorted string from a to z: " << endl;
	next = first;
	while (next != NULL)                 // ����� ��������
	{
		cout << next->Str << endl;
		next = next->right;
	}
	cout << "_____________________________\n";
	////////////////////////////////////////
	cout << " Sorted string from z to a: " << endl;
	next = last;
	while (next != NULL)
	{
		cout << next->Str << endl;
		next = next->left;
	}
	cout << "_____________________________\n";
	////////////////////////////////////////

	pass = first;
	do {
		next = pass->right;
		delete pass;
		pass = next;
	} while (pass != NULL);
	
	return 0;
}
