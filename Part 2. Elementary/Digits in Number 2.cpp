#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    cout << "\t������� ����� �� �������\n";
    int number;
start:
    cout << "\n������� ����������� �����: ";
    cin >> number;
    if ((number > 9999) && (number <= 99999))
        for (int i = 0; i < 5; i++) // ����, ������� �������� ������� �����
            cout << i + 1 << "-� ����� = " << number / static_cast<int>(pow(10, (4 - i))) % 10<< endl;
    else
    {
        cout << "\n�� ����� �������� �����!\n";
        goto start;
    }
    int menu_num;
menu:
    cout << "\n1 - ���������� ������\n2 - �����\n\n�������� ����� (1 ��� 2): ";
    cin >> menu_num;
    switch (menu_num)
    {
    case 1: {goto start; break; }
    case 2: {return 0; break; }
    default: {cout << "\n������ ������������!\n"; goto menu; }
    }
    system("pause");
}