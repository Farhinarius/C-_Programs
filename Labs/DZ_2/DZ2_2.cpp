/* ���� ������������������ �����. ������ �������� ������������� ���������� � ������� �� ���� ����������� ��������.  
�������� ���������, �������������� ���� ����� � �� �����������. ��� ����������� ������ �� ���� ����� ����������  ������, 
������� ��������� ����� n ���� ������ �� �������� ( n � �������� � ����������). �����, ����������� �� ����������, �������, 
���  n  �� �����, ���������� ����� �������-�������� ������������� �� ���������  ����� ��������.
 ������� �� ������ ������������� � ������������ ���������� ������������������ �����.

 */ 
// options;

#include <iostream>
#include <string>
using namespace std;
char full_string[100] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
///////////////////////////////////////

unsigned const words = 20;
unsigned const symbols = 30;

void main()
{
	char ans;
	int n,length = 0,k = 0;
	int i,j = 0;
	char s[words][symbols] = {};     // 5 ����� �� 10 ��������
	char str[words][symbols] = {}; 
	char rem;
	
	for (k = 0; k < 10; k++)
	{ 
		cout << "\n Enter code string: ";
		cin >> (s[k]);
		cout << "\n Enter number of bias:";
		cin >> n;



		for (i = 0; i < strlen(s[k]); i++)
		{
			rem = s[k][i];
			if (s[k][i] != ' ')
			{
				while (full_string[j] != rem)                // ���������� ����� ����� � ��������
				{
					j++;
				}
				if (j + n >= 25)
				{
					str[k][i] = full_string[n - (25 - j) - 1];
				}
				else
					str[k][i] = full_string[j + n];
			}
			j = 0;
		}
		cout << "\n Translated string: " << str[k] << endl;
		n = 0;
	}
	
	
}
