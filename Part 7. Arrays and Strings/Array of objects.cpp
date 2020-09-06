// Program name.cpp or task;
// options;

#include <iostream>
#include <string>
using namespace std;
////////////////////////////////
struct Distance
{
private:
	int feet;
	float inches;
public:
	Distance() : feet(0), inches(0) {};
	void getdist() 
	{
		cout << " Enter feet count: "; cin >> feet;
		cout << " Enter inches count: "; cin >> inches;
	}
	void showdist()
	{
		cout << "Feet Value: " << feet << endl;
		cout << "Inches Value: " << inches << endl;
	}
};

int main()
{
	Distance dist[100];
	int n = 0; // счетчик данных
	char ans;
	do
	{
		cout << " Enter the interval number n = " << n + 1 << endl;
		dist[n++].getdist(); // получаем и сохраняем длину
		cout << " Continue entering (y/n)?: ";
		cin >> ans;
		cout << endl;
	} while (ans != 'n');

	for (int j = 0; j < n; j++)
	{
		cout << "\nInterval number - " << j + 1 << " : ";
		dist[j].showdist();
	}
	cout << endl;
	return 0;
}