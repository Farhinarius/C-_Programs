// Fi2.cpp

#include <iostream>
using namespace std;

int main()
{
	short int num, f_prev = 1, f = 1, f_next;
	cout << "Enter the number of fibonacci numbers ((n-2)/3): "; cin >> num;
	cout << f_prev << " " << f; 
	for (short int i = 0; i < (num - 2); i += 3) {
		f_next = f + f_prev;
		cout << " " << f_next;
		
		f_prev = f_next + f;
		cout << " " << f_prev;
		
		f = f_next + f_prev;
		cout << " " << f;
		}
	return 0;
}

