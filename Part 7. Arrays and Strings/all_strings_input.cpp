#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	const int SIZE = 255;
	char s[SIZE];
	string str;

	///////////////////////////////////
	cin >> s; // default string input

	cin.get(s, SIZE); // Enter array of char-ers with spaces	
	// first parameter is address of array of char-er, second parameter is length of string

	cin.get(s, SIZE, '$'); // Enter multiline array of char-ers
	// first parameter is address of array of char-er, second parameter is length of string, third parameter is delimiter of multiline

	

	// -> also in use gets(), gets_s, getc, getchar
	getchar();
	gets_s(s, 100);
	////////////////////////////////////

	cin >> str; // enter string before first space

	getline(cin, str); // enter whole string with whole set of symbols

}