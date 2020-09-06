// str_cpy.cpp

#include <iostream>
using namespace std;
void copystr(char*, const char*);

void main()
{
	const char* str1 = "AAAAAAAAAAAAAA";
	char str2[80] = {};
	copystr(str2, str1);
	cout << str1 << endl; 
	cout << str2 << endl;

}
void copystr(char* s, const char* s1)
{
	while (*s1)
	{
		*s++ = *s1++;
	}
	*s = '\0';
}
