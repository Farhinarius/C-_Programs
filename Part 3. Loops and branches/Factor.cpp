// Factor.cpp
// using libobj

#include <iostream>
using namespace std;

int main()
{
	unsigned int num;
	unsigned long fact = 1;
	cout << "Input num: ";
	cin >> num;
	for (int i = num; i != 0; i--) {
		fact *= i;
	}
	cout << "factor of  " << num << " = " << fact << endl;

	unsigned int f_number;
	unsigned long f = 1;
	cout << "\nInput factorial number: "; cin >> f_number;
	for (int j = 1; j <= f_number; j++) {
		f *= j;
	}
	cout << "factor of  " << f_number << " = " << f << endl;
	return 0;
}