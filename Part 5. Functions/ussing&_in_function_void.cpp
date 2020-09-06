// ussing&_in_function.cpp
//

#include <iostream>
using namespace std;
void trans_num(float, float&, float&); // prototype of procedure;

void main()
{
	float num, int_part, float_part;
	do
	{
		cout << "\nEnter the (float) number: " << endl; 
		cin >> num;
		trans_num(num, int_part, float_part);
		cout << "\n Int part = " << int_part
	         << "\n Float part =" << float_part << endl;

	} while (num != 0.0);
}
void trans_num(float n, float& inter, float& outer)  // ссылается на значения основной программы и возвращает их
{
	long temp = static_cast<long>(n);
	inter = static_cast<float>(temp);
	outer = n - inter;
}

