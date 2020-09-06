#include <iostream>
#define outline(ch, i) \
    for (int j = 0; j < i; j++) \
	{ cout << ch; } \

#define RETURN return 0;
using namespace std;

//////////////////////////////////////////////

void repchar(char ch, int i)
{
	for (int j = 0; j < i; j++)
	{
		cout << ch;
	}
	cout << endl;
}

int main()
{
	outline(" *",20);
	cout << "\n Wake the fuck up, samurai !" << endl;
	outline(" *", 20);
	cout << endl;
	RETURN;
}