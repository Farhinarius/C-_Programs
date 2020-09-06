// Mem_mas.cpp
//

#include <iostream>
using namespace std;

///////////////////////////////////

int main()
{
	int mas[10];
	int i, n, max, min;
	cout << "\n Input maximum elem. of mas: "; cin >> n;
	cout << "\n Input massive: " << endl;
	for (i = 1; i <= n; i++) {
		cin >> mas[i];  //create 10-elements massive 
	}

	// Find maximum element :
	max = mas[1];
	for (i = 1; i <= n; i++) {
		if (mas[i] > max) max = mas[i];
	}
	cout << "\n Maximum element of massive: " << max;
	cout << "\n/-----------------------------------------------------------/" << endl;

	// Find minimum element: 
	min = mas[1];
	for (i = 1; i <= n; i++) {
		if (mas[i] < min) min = mas[i];
	}
	cout << "\n Minimum element of massive: " << min;
	cout << "\n/-----------------------------------------------------------/" << endl;

	// Looking for all odd elements:
	cout << " All odd elem. in massive: " << endl;
	for (i = 1; i <= n; i++) {
		if (mas[i] % 2 == 1) cout << mas[i] << " ";
	}
	cout << "\n/-----------------------------------------------------------/" << endl;

	// Looking for all even elements: 
	cout << " All even elem. in massive: " << endl;
	for (i = 1; i <= n; i++) {
		if (mas[i] % 2 == 0) cout << mas[i] << " ";
	}
	cout << "\n/-----------------------------------------------------------/" << endl;
	return 0;
}