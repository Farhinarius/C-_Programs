//16 -- 10.
#include <iostream>
#include <conio.h> 
using namespace std;

///////////////////////////////////////////////////

unsigned const string_size = 20;
int main()
{                                         // 3 2 1 0 ---
	char ch_hex_num[string_size];         // 6 5 A B --- 16
	int decimal_number = 0;
	int string_count = 0;
	int k = 0;                             // pow number;
	int a = 0;

///////////////////////////////////////////////////

	cout << " Enter a hexadecimal number: ";
	while ((ch_hex_num[string_count] = _getche()) != '\r' )
	{
		++k;
		++string_count;
	}
	k = k - 1;
	string_count = 0;

	cout <<"\n Degrees increases: 0 by "<< k;
	               //for (int i = k; i >= 0; i--, string_count++)
	while (k >= 0)
	{
		switch (ch_hex_num[string_count])
		{
		case 'A':
			decimal_number += 10 * pow(16, k);
			k--;
			string_count++;
			break;
		case 'B':
			decimal_number += 11 * pow(16, k);
			k--;
			string_count++;
			break;
		case 'C':
			decimal_number += 12 * pow(16, k);
			k--;
			string_count++;
			break;
		case 'D':
			decimal_number += 13 * pow(16, k);
			k--;
			string_count++;
			break;
		case 'E':
			decimal_number += 14 * pow(16, k);
			k--;
			string_count++;
			break;
		case 'F':
			decimal_number += 15 * pow(16, k);
			k--;
			string_count++;
			break;
		default:
			a = ch_hex_num[string_count] - '0'; // a = int(ch_hex_num[string_count]) - '48';
			decimal_number += a * pow(16, k);
			k--;
			string_count++;
			break;
		}
	}

	cout << "\n Decimal Number: " << decimal_number;
	return 0;
}