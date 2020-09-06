// while4.cpp 

#include <iostream> 
#include <iomanip> 
using namespace std;

int main()
{
	int n = 1;
	int quadra = 1;
	cout << "Number and this 4-th degree number: " << endl;
	
	while (quadra < 100000) {
		cout << n << " - " << quadra << endl;
		++n;
		quadra = pow(n, 4);
	}
	return 0;
}