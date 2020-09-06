// Program name.cpp or task;
// options;

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word(""); // word	
	string s = ""; // string, that we enter
	string new_line = {};	// string, that we looking for
	size_t number_of_words = 0, start = 0, end;
	cout << "Enter new string: ";
	getline(cin, s);             

	for (size_t i = 0; i <= s.length(); i++)
	{
		if ((s[i] == ' ') || (i == s.length())) // если будет найден конец слова или конец строки
		{
			end = i - 1;						 //	end -> last char-er in word
			word = s.substr(start, end - start + 1); // copy char-ers before ' ' to 
			if ((word[0] == 'd') and (word[word.length() - 1] == 'w'))		// or word[end - start]
			{
				++number_of_words;  // increment number of words
				cout << "\nWord what we looking for: " << word << endl;
				cout << "/----------------------------/ " << endl;
				for (size_t j = 0; j < word.length(); j++)
				{
					cout << "Addres of symbol" << word[j] << ": " << &word + j << endl;
				}
				new_line += word; new_line += ';';
			}
			start = i + 1;						 // remember beginning of next word
			word.clear();						 // not neccessary
		}
	}
	cout << "\n" << endl;
	cout << "\n Looking for -> THIS -> words: " << new_line << endl;
	cout << "\n Number of finding words: " << number_of_words << endl;
	return 0;
}