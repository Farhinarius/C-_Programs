#include <iostream>
using namespace std;

void display_all_digits(int num, int number_of_digits)
{
	int remain;
	int divider = 1;

	for (size_t j = 0; j < number_of_digits - 1; j++)
		divider *= 10;

	for (size_t i = 0; i < number_of_digits; i++)
	{
		// pow
		remain = static_cast<int>(num / divider) % 10;
		cout << i+1 << " digit: " << remain << endl;
		//num = num % divider;
		divider /= 10;
	}
}

int main()
{
	int num, num_of_dig;
	cout << "Enter the number: "; cin >> num;
	cout << "Enter num_of_dig: "; cin >> num_of_dig;
	display_all_digits(num, num_of_dig);
	return 0;
}