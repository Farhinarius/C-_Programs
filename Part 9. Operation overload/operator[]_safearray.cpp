// arrover3.cpp
// ������������ �������� ����������� �������, ������������
// ���� ������� ��� �������������
// ������������ ���������� �������� []
#include <iostream>
using namespace std;
#include <process.h> // ��� ������� exit
const int LIMIT = 100; // ������ �������
///////////////////////////////////////////////////////////
class safearray
{
private:
	int arr[LIMIT];
public:
	// �������� ��������, ��� ������� ���������� ������!
	int& operator[](int n)
{
	if (n < 0 || n >= LIMIT)
	{
		cout << "\nError index!"; exit(1);
	}
	return arr[n];
}
};
///////////////////////////////////////////////////////////
int main()
{
	safearray sa1;
	// ������ �������� ���������
	for (int j = 0; j < 10; j++)
		sa1[j] = j * 10; // ���������� ������� ����� �� ����� =
		// ���������� ��������
	for (int j = 0; j < 10; j++)
	{
		int temp = sa1[j]; // ���������� ������� ������ �� ����� =
		cout << " Element[" << j+1 << "] = " << temp << endl;
	}
	return 0;
}