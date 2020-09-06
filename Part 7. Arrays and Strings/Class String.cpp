// strobj.cpp
// ������ ��� �����
#include <iostream>
#include <cstring>
using namespace std;
///////////////////////////////////////////////////////////
class String
{
private:
	enum { SZ = 80 }; // ������������ ������ ������
	char str[SZ]; // ���� ������
public:
	String() // ����������� ��� ����������
	{
		str[0] = '\0';
	}
	
	String(const char * s) // ����������� � ����� ����������
	{
		strcpy_s(str, s);
	}

	void display() // ����� ������
	{
		cout << str;
	}

	void concat(String s2) // �������� �����
	{
		if (strlen(str) + strlen(s2.str) < SZ)
			strcat_s(str, s2.str);
		else
			cout << "\n������������!";
	}
};
///////////////////////////////////////////////////////////
int main()
{
	String s1("ALALAL! "); // ����������� � ����� ����������
	String s2 = "LOLOLO!"; // ����������, �� � ������ ����� 
	String s3; // ����������� ��� ����������
	
	cout << "\ns1 ="; s1.display(); // ���������� ��� ������
	cout << "\ns2 ="; s2.display();
	cout << "\ns3 ="; s3.display();
	
	s3 = s1; // ����������
	cout << "\ns3 ="; s3.display();
	
	s3.concat(s2); // ��������
	cout << "\ns3 ="; s3.display();
	
	cout << endl;
	return 0;
}