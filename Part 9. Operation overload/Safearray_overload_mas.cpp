// Safearray_overload_mas.cpp
// options;

#include <iostream>
#include <string>
#include <process.h>
using namespace std;
const int LIMIT = 100;

///////////////////////////////////////////////
class safearray
{
private:
	int arr[LIMIT];
public:
	// ��������� �������� �������� �������
	void putel(int n, int value)
	{
		if (n < 0 || n >= LIMIT)
		{
			cout << "\nError text!"; exit(1);
		}
		arr[n] = value;
	}
	// ��������� �������� �������� �������
	int getel(int n) const
	{
			if (n < 0 || n >= LIMIT)
			{
				cout << "\nError text!"; exit(1);
			}
		return arr[n];
	}
};
///////////////////////////////////////////////
int main()
{
	safearray mas;
	
	// ������ �������� ���������
	for (int j = 0; j < 10; j++)
		mas.putel(j, j * 10+10);

	// ���������� ��������
	for (int j = 0; j < 10; j++)
	{
		int temp = mas.getel(j);
		cout << " Element [" << j+1 << "] = " << temp << endl;
	}
	return 0;
}