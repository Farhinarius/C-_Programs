// arifmetic_degree_sum.cpp or task;
// options;

#include <iostream>
#include <string>
using namespace std;

////////////////////////////////

int main()
{
	// definite all variavles;
	int n = 0;
	float k = 0;
	float sum = 0;

	cout << "Enter N: "; cin >> n ;   // Number of var. //
	cout << "Enter k: "; cin >> k;  // degree for all var. //
    
									// loop with calculation 
	for (int i = 0; i < n; i++)
	{
		sum += (pow(i+1, k));
		// sum += alter_sum;
	}

	cout << "Sum: " << sum << endl;

	return 0;
}