// Program name.cpp or task;
// options;

#include <iostream>
#include <string>
using namespace std;

///////////////////////////

int main()
{
    char word_s[100] = {}; // word	
    string s = ""; // string, that we entered
    string st = "";
    string new_line = "";
	int l = 0;     // длина строки до искомого слова
	int i;  // for cycle
	int k = 0;  
	int word_count = 0; // number of words
	cout << "Enter new string: ";
	getline(cin, s);                         // ввод строки
	st = s;  // заменяем рабочую строкy на st, чтобы не сломать работу цикла с постоянной величиной s.length()
	int all_words = 0;  // количество слов в изначальной строки
	/////////////////////////////////////////////////////

	for (i = 0; i <= s.length(); i++)
	{
		
		if ((s[i] == ' ') || (i == s.length())) // если будет найден конец слова или конец строки
		{
			++all_words;
			if (all_words == 1) // если кол-во слов равно одному
			{
				k = i ; // заменяем рабочую переменную, чтобы не приостановить работу цикла k = ' '
				l = i;  // запоминаем позицию i для работы со следующим словом				l = ' '
			}
			if (all_words > 1)    // если количество слов больше единицы
			{
				k = i - (l + 1); // находим длину слова рассматриваемого слова по формуле, в которой k - количество символов, 
				                 // i - нынешний указатель на конец рассматриваемого слова, l - указатенль на конец предыдущего слова
				l = i;  // запоминаем позицию i для работы со следующим словом
			}
				     
			st.copy(word_s, k , 0); // ? копируем слова в word_s   ;k+1 копирую с пробелом
			if (word_s[0] == 'd' && word_s[k - 1] == 'w')
			{
				++word_count;  // increment number of words
				cout << "\nWord what we looking for: " << word_s << endl;
				for (int j = 0; j < strlen(word_s); j++)
				{
					cout << "\nAddress of symbol: " << (void*)(word_s+j) << endl;
				}
				/*cout << "\nAddress of symbol element: " << (void*)(word_s) << endl;
				cout << "\nAddress of last element: " << (void*)(word_s + k - 1) << endl; */
				cout << " /----------------------------/ " << endl;
				new_line += word_s;
				new_line += ';';
			}
             
			st.erase(0,k + 1);    // k + 1 удаляю с вместе пробелом (k это количество, а индексы идут с 0, потому с учетом пробела прибавляю 1)
			k = 0;
		}
		

	}
	cout << "\n" << endl;
	cout << "\n Looking for ->THIS-> words in string: " << new_line << endl;
	cout << "\n Number of finding words in string: " << word_count << endl;
	return 0;
}