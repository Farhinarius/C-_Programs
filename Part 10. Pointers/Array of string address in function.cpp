// ptrtostr.cpp
// ������ ���������� �� ������

#include <iostream>
using namespace std;
const int DAYS = 7;
void output_masstring(const char * arr[]);

int main()
{
	// ������ ���������� �� ������
	const char* arrptrs[DAYS] = { "Monday", "Thuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" }; // �������������� ������ �����
	for (int j = 0; j < DAYS; j++) // ������� ��� ������
		cout << arrptrs[j] << endl;
	cout << endl;

	output_masstring(arrptrs); // �������� �� ������ ������ "������� ��������" (��������, �� �� ������ �����) 
	// ������ �������� -> ������ ����������, � ������� 7 �����
	return 0;
}

void output_masstring(const char * arr[]) // �������� �� ������ ������ �����
{
	for (int j = 0; j < DAYS; j++) // ������� ��� ������
		cout << *(arr++) << endl;
}