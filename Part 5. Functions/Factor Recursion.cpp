// 
// 

#include <iostream>
using namespace std;
unsigned long factor(unsigned long);
///////////////////////////

void main()
{
	unsigned long fact;
	int f;
	cout << "\nEnter f number: "; cin >> f;
	fact = factor(f);  // call function and using in fact;
	cout << "\nFactor of num (" << f << ") =  " << fact << endl;
}

unsigned long factor(unsigned long f)
{
	if (f > 1)
		return f * factor(f - 1); // return number and call new function ( in this fucntion you also return number - 1 and function - 1)  
	else 
		return 1;
}