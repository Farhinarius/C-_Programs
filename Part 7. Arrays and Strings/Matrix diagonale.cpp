// Программа вывода главной и побочной диагонали матрицы
// options;

#include <iostream>
using namespace std;

///////////////////////////

void main()
{
	int matrix[10][10];
	int n = 0, k = 1, m = 0;
	cout << "\nEnter maximun elements of matr: "; cin >> n; cin >> m;
	cout << "\n Mew matrix:" << endl;
	
	/////////////////////////////////////////////////////

	for (int i = 0; i < n; i++)        // matrix init;
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = k * 1;
			cout << matrix[i][j] << " ";
			++k;
		}
		cout << endl;
	}
	
	/////////////////////////////////////////////////////
	
	cout << " ************************************************** "  << endl;
	
	/////////////////////////////////////////////////////
	
	for (int i = 0; i < n; i++)        // diagonale;
	{
		for (int j = 0; j < m; j++)
		{
			if (i = j) cout << matrix[i][j];
		}
		cout << endl;
	}
	
	/////////////////////////////////////////////////////
	
	int rem = m;
	cout << " ************************************************** " << endl;
	
	/////////////////////////////////////////////////////
	
	for (int i = 0; i < n; i--)        // diagonale dop.;
	{
		for (int j = 0; j < m; j++)
		{
			if (m = (rem-1)) cout << matrix[i][j];
			--rem;	
		}
		cout << endl;
	}

}