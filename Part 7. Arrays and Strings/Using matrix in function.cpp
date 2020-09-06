// trans_mas_into_function.cpp
// uses_massive_in_function;

#include <iostream>
using namespace std;

const int n = 6;
const int m = 5;
void trans_mas(int mas[n][m]);

////////////////////////////////////////////////

void main()
{
	int mas[n][m] = {};
	trans_mas(mas);
}

////////////////////////////////////////////////
void trans_mas(int mas[n][m])
{
	int k = 0;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			++k;
			mas[i][j] = k;
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
}