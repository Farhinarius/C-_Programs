// Program name.cpp or task;
// options;

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;


////////////////////////////////

int main()
{
	int n;
	double a;
	char ch;
	const char * fname = "C:\\Users\\dguln_000\\Documents\\C++_Programs\\Part 10. Files and Stream\\file1.txt";
	fstream myFile; // ������� �������� ���������� ��� �������� ������� � �����
	myFile.open(fname,ios::out);
	// ��������� ���� � ������ ������
	
	cout << "Enter number of counts: "; cin >> n; // ���������� ��������� � �����
	for (int i = 0; i < n; i++)
	{
		cout << "Enter count a: ";
		// ���� �����
		cin >> a; // ������ � �������
		myFile << a << "\t" << endl; // ����� �� ���������� � ����
	}
	//�������� ������
	myFile.close();
	cout << "Do you want to clear file y/n ?" << endl; cin >> ch;
	if (ch == 'y')
	{
		myFile.clear();
	}

	// system("pause");
	return 0;
}