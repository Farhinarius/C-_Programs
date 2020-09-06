#include <iostream>
#include <string>;
using namespace std;

///////////////////////////////////////////////
class person // ����� person
{
	
public:
	char name[40];
	void input_name()
	{
		cout << " Enter name: "; cin >> name;
	}
	void output_name()
	{
		cout << " Name: " << name << endl;
	}
	virtual void input_data() = 0; // ������ �����������
	virtual bool isOutstanding() = 0; // �������
};
////////////////////////////////////////////////
class student : public person // ����� student
{
private:
	float gpa; // ������� ����
public:
	void input_data() // ��������� ������ �� ������� � ������������
	{
		person::input_name(); // �������� ����� �������� ������
		cout << " Middle mark of student: "; cin >> gpa;
		cout << endl;
	}
		bool isOutstanding()
	{
		return (gpa > 3.5) ? true : false;
	}
};
////////////////////////////////////////////////
class professor : public person // ����� professor
{
private:
	int numPubs; // ����� ����������
public:
	void input_data() // ��������� ������ � �������� �  ������������
	{ 		
		person::input_name();
		cout << " Number of publications: "; cin >> numPubs;
		cout << endl;
	}
	bool isOutstanding()
	{
		return (numPubs > 100) ? true : false;
	}
};
////////////////////////////////////////////////
int main()
{
	person  * person_pointer[100]; // ������ ���������� �� person
	int n = 0; // ����� �����, ��������� � ������ char choice;
	char choice;
	string str;
	
	///////////////////////////////////////////////////

	do {
		cout << " Student (s) or Professor(p) ";
		cin >> choice;
		if (choice == 's')                     // ������� ������ �������
			person_pointer[n] = new student;   // � ������
		else                                   // ������� ������
			person_pointer[n] = new professor; // �������� � ������
		
		person_pointer[n++]->input_data(); // ������ ������ � �������
		
		cout << " Do you wanr input more persons (y/n)? "; // ������� ��� �������
		cin >> choice;
	} while (choice != 'n'); // ����, ���� ����� 'y'
	
	// �������,��������� �����
	
	cout << "Input name of person"; getline(cin, str);
	for (int j = 0; j < 10; j++)
	{
		if (&str == person_pointer[j].name)
		{
			person_pointer[j]->input_name(); // ������� ��� �����,
			if (person_pointer[j]->isOutstanding()) // �������� �
				cout << " It's great human!\n"; // ����������
		}
	}
	return 0;
}