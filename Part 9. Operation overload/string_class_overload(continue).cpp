// string_class_overload(continue).cpp
// options;

#include <iostream>
#include <string.h>
using namespace std;

////////////////////////////////
class String
{
private:
	enum { SZ = 80 };
	char str[SZ];
public:
	String()
	{
		strcpy(str, "");
	}
	String(char s[])
	{
		strcpy(str, s);
	}
	void display_output() const
	{
		cout << str;
	}
	void get_string()
	{
		cout << "Enter the string: " << endl;
		cin.get(str, SZ);
	}
	bool operator==(String ss)
	{
		return (strcmp(str, ss.str) == 0) ? true : false;
	}
};

int main()
{
	String s1;
	String s2;
	String s3;
	s1.get_string();
	s2.get_string();

	return 0;
}