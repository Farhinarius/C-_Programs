// Program name.cpp or task;
// options;

#include <iostream>
#include <string>
using namespace std;

////////////////////////////////

class Counter
{
private:
	unsigned int count;
public:
	// init 0 count num;
	Counter() : count(0) 
	{};
	// Often uses with create illusion(invisible) object
	Counter(int c) : count(c)
	{};
	// Get number of object
	unsigned int get_count()
	{
		return count;
	}
	// operator ++ count of object;
	Counter operator++()
	{
		return Counter(++count);
	}
	//  operator object 1 (value) + object 2 (value) = return;
	Counter operator+(Counter a)
	{
		Counter b;
		b.count = count + a.count;
		return b;
	}
};

int main()
{
	Counter c1, c2;
	cout << "\n Value of count c1: " << c1.get_count() << endl;
	cout << "  Value of count c2: " << c2.get_count() << endl;
	++c1;
	c2 = c1 + c1;
	cout << "\n Value of count c1: " << c1.get_count() << endl;
	cout << "  Value of count c2: " << c2.get_count() << endl;
	return 0;
}