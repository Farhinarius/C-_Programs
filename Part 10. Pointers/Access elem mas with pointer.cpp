// dynamic_elements_massive.cpp 
//

#include <iostream>
using namespace std;

int main()
{
	int mas[50] = {10,20,30,40,50,60,70,80,90,100};
	int* mas_ptr;
	for (int i = 0; i <= 9; i++)
	{
		cout << *(mas + i) << endl;
	}
	mas_ptr = mas;
	cout << endl;
	for (int i = 0; i <= 9; i++)
	{
		cout << *(mas_ptr++) << endl;
	}
	return 0;
}

