#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
void insertSort(vector<int>&, int n);

int main()
{
	vector<int> v;

	for (int i = 0; i < 8; ++i)
		v.push_back(i);

	for (size_t i = 0; i < v.size(); ++i)
		swap(v[i], v[rand() % (v.size() - i) + i]); // last index for incrementing  value

	for (auto i : v)
		cout << i << " ";
	
	insertSort(v, 8);

	for (auto i : v)
		cout << i << " ";
	
	cout << endl;
	return 0;
}

void insertSort(vector<int>& arr, int n)
{
	int counter = 0;
	for (int i = 1; i < n; i++) 
	{
		for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--)
		{
			counter++;
			int tmp = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = tmp;
		}
	}
	cout << "\n\nNumber of iterations: "<< counter << endl;
}

/* another variation of insert Sorting
void insertion_sort(info* student, int n)
{
	for (int i = 1; i < n; i++)
	{
		int k = i;
		while (k > 0 && student[k - 1].code > student[k].code)
		{
			info temp = student[k - 1];
			student[k - 1] = student[k];
			student[k] = temp;
			k -= 1;
		}
	} 
 }
*/