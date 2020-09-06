// Count_of_words.cpp
// too shablon 
#include <iostream> 
#include <conio.h>
using namespace std;

int main()
{
	int ch_count = 0;
	int wd_count = 1;
	char ch = 'a';
	cout << " Input string: ";
	while (ch  != '\r') {
		ch = getche();
		if (ch == ' ')
		 wd_count++;
		 else 
		 ch_count++;
	}
	cout << " \nWords " << wd_count << endl;
	cout << " Symbols: " << ch_count << endl;
	return 0;
}