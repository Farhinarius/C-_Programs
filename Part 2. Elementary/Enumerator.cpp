#include <iostream>
using namespace std;

enum  weddingAnn { chintz = 1, paper, leather, linen, wooden } year;//���������� ������������ � ��������� ����������

int main()
{
    setlocale(LC_ALL, "rus");

    cout << "���� � ������ ��������\t" << chintz << "-� ��������� �� ��� �������!!!";
    cout << "\n";
    cout << "������ � ����� ��������\t" << paper << "-� ��������� �� ��� �������!!!";
    cout << "\n";
    cout << "���� � ������ ��������\t" << leather << "-� ��������� �� ��� �������!!!";
    cout << "\n";
    cout << "����� � ����� ��������\t" << linen << "-� ��������� �� ��� �������!!!";
    cout << "\n";
    cout << "���� � ����� ��������\t" << wooden << "-� ��������� �� ��� �������!!!";
    cout << "\n\n";

    return 0;
}