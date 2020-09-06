// Program name.cpp or task;
// options;

#include <iostream>
#include <string>
using namespace std;
void reversit(char *st);

///////////////////////////

void main()
{
	char s[60];
	cin.get(s, 60);
	reversit(s);
}

void reversit(char *st)
{
	char s_remem;
	for (int i = 0; i < strlen(st); i++)
	{
		s_remem = st[i];
		st[i] = st[strlen(st) - i]
			st[strlen(st) - i] = s_remem;
		if (st[i] == st[strlen(st) - i]) st[i] = st[strlen(st) - i];

	}
}