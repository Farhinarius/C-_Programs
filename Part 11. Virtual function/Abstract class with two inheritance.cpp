#include <iostream>
#include <string>;
using namespace std;

///////////////////////////////////////////////
class person // класс person
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
	virtual void input_data() = 0; // чистые виртуальные
	virtual bool isOutstanding() = 0; // функции
};
////////////////////////////////////////////////
class student : public person // класс student
{
private:
	float gpa; // средний балл
public:
	void input_data() // запросить данные об ученике у пользовател€
	{
		person::input_name(); // вызываем метод базового класса
		cout << " Middle mark of student: "; cin >> gpa;
		cout << endl;
	}
		bool isOutstanding()
	{
		return (gpa > 3.5) ? true : false;
	}
};
////////////////////////////////////////////////
class professor : public person // класс professor
{
private:
	int numPubs; // число публикаций
public:
	void input_data() // запросить данные о педагоге у  пользовател€
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
	person  * person_pointer[100]; // массив указателей на person
	int n = 0; // число людей, внесенных в список char choice;
	char choice;
	string str;
	
	///////////////////////////////////////////////////

	do {
		cout << " Student (s) or Professor(p) ";
		cin >> choice;
		if (choice == 's')                     // «анести нового ученика
			person_pointer[n] = new student;   // в массив
		else                                   // «анести нового
			person_pointer[n] = new professor; // педагога в массив
		
		person_pointer[n++]->input_data(); // «апрос данных о персоне
		
		cout << " Do you wanr input more persons (y/n)? "; // создать еще персону
		cin >> choice;
	} while (choice != 'n'); // цикл, пока ответ 'y'
	
	// счЄтчик,вывод€щий людей
	
	cout << "Input name of person"; getline(cin, str);
	for (int j = 0; j < 10; j++)
	{
		if (&str == person_pointer[j].name)
		{
			person_pointer[j]->input_name(); // ¬ывести все имена,
			if (person_pointer[j]->isOutstanding()) // сообщать о
				cout << " It's great human!\n"; // выдающихс€
		}
	}
	return 0;
}