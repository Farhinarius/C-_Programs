// newintro.cpp // ������������ � ���������� new 
#include <iostream> 
#include <cstring> 
using namespace std;

int main() {
	const char* str = "Power"; // 5 symbols
	int len = strlen(str); // �������� ����� ����� ������
	char* ptr; // ��������� ���������� pointer
	ptr = new char[len + 1]; // ������� ������ ������ ���������� ��������� ������� �������� char * str;
	strcpy(ptr, str); // ��������� ������ str � ptr
	cout << "ptr = " << ptr << endl; // ������� ��� ���������� � ptr
	delete[] ptr; // ��������� ���������� ������
	return 0;
}