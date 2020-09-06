// 
// too shablon 

#include <iostream> 
using namespace std;

int main()
{
	int temp, k;
	cout << " Input k: "; cin >> k;
	temp = (k - 1) / 2 + 10;
	cout << " N = " << ((k % 2 == 0) ? (temp % 10) : (temp / 10));
	return 0;
}