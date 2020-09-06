// Object_matrix
// options;

#include <iostream>
using namespace std;

//////////////////////////////////////////
class Matrix
{
private:
	int n;
	int m;
	int matrix[100][100];
	int max_line[10000];
public:
	void init_matrix();
	void show_matrix();
	void find_max();
	void maximum();
};
//////////////////////////////////////////

int main()
{
	Matrix matr;
	
	///
	matr.init_matrix();
	
	///
	matr.show_matrix();
	
	///
	// cout << "Max line: " << endl;
	matr.find_max();
	cout << endl;
	
	///
	matr.maximum();
	// cout << "Max element of matrix: " << endl;
	cout << endl;
	return 0;
}

//////////////////////////////////////////

void Matrix::init_matrix()
{
	cout << "Input number of string: ";
	cin >> n;
	cout << "Input number of column: ";
	cin >> m;
	cout << "Enter the matrix: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "You input " << i+1 << " string" << endl;
		for (int j = 0; j < m; j++)
		{
			cout << "You input " << j+1 << " column" << endl;
			cin >> matrix[i][j];
		}
	}
}

/////////////////////////////////////////////

void Matrix::show_matrix()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << matrix[i][j];
		}
		cout << endl;
    }
}

///////////////////////////////////////////

void Matrix::find_max()
{
	max_line[0] = -1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (max_line[i] < matrix[i][j])
				max_line[i] = matrix[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++)
		cout << max_line[i];

}

////////////////////////////////////////////

void Matrix::maximum()
{
	int max = -1;
	for (int i = 0; i < n; i++)
	{
		if (max < max_line[i])
			max = max_line[i];
	}
	cout << max;
}

////////////////////////////////////////////
