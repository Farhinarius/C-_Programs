// Lab5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// extern "C" void __cdecl ADD1(int a, int b, int *c);
int main()
{
	string source, result, word;
	size_t prev = 0;
	vector<string> words;
	cout << "Input source string: ";
	getline(cin, source);

	/* for (size_t i = 0; i < source.size() - 1; i++)
	{
		if (source[i] == ' ')
		{
			word = source.substr(prev, i - prev);
			words.push_back(word);
			prev = i + 1;
		}
	}

	for (size_t i = 0; i < words.size() - 1; i++)
	{
		cout << words[i];
	} */
}