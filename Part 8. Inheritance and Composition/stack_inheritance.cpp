// Stack_overload;
// options;

#include <iostream>
#include <string>
using namespace std;

////////////////////////////////

class Stack
{
protected:
	enum { max = 100 }; // max element in mas
	int st[max];  // mas of st
	int top;      // int top )
public: 
	Stack()     // top initialization  
	{
		top = -1;
	}
	void push(int var)  // push into stack parameter var;
	{
	  st[++top] = var;
	}
	int  pop() // delete from the stack;
	{
		return st[--top];
	}
};

////////////////////////////////////////

class Stack2 : public Stack
{
public:
	void push(int var)     
	{
		if (top >= max - 1) // chech index top, if index top more than max, then this element of mas can't exist --> "this is error"
		{
			cout << "\n Error, this number can't turn into stack;"; exit(1);
		}
		Stack::push(var);
    }
	int pop()  // chech index top, if index top < 0 (index can't be < 0), then this element of mas can't exist --> "this is error"
	{
		if (top < 0)
		{
			cout << "\n Error, this number can't exist into stack;"; exit(1);
		}
		return Stack::pop();
	}
};

///////////////////////////////////////
int main()
{
	Stack2 s1;

	s1.push(11);    // put into stack 3 num
	s1.push(22);
	s1.push(33);
	s1.push(44);

	cout << endl << s1.pop();  // delete from the stack;
	cout << endl << s1.pop();
	cout << endl << s1.pop();
	cout << endl << s1.pop(); // info don't exist, error
	cout << endl;
	return 0;
}